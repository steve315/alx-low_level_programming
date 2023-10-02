#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: sucess 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_des = open(filename, O_RDONLY);
	char *buff = malloc(sizeof(char *) * letters);
	ssize_t reading_b = read(file_des, buff, letters);
	ssize_t written_b = write(STDOUT_FILENO, buff, reading_b);

	if (filename == NULL)
	{
		return (0);
	}
	if (file_des == -1)
	{
		return (0);
	}
	if (buff == NULL)
	{
		close(file_des);
	}
	if (reading_b == -1)
	{
		free(buff);
		close(file_des);
		return (0);
	}
	if (written_b == -1 || written_b != reading_b)
	{
		free(buff);
		close(file_des);
		return (0);
	}
	free(buff);
	close(file_des);

	return (written_b);
}
