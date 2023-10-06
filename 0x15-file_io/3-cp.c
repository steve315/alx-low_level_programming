#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void error1(int file, char *buff, char *argument);
void error2(int file, char *buffer, char *argument);
void error3(int file, char *buffer);
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int input_f, output_f, res_in, res_out;
	char *buff;

	if (argc != 3)
		exit(97);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);
	input_f = open(argv[1], O_RDONLY);
	error1(input_f, buff, argv[1]);
	output_f = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error2(output_f, buff, argv[2]);

	do {
		res_in = read(input_f, buff, 1024);
		if (res_in == 0)
			break;
		error1(res_in, buff, argv[1]);
		res_out = write(input_f, buff, res_in);
		error2(res_out, buff, argv[2]);
	} while (res_out >= 1024);

	res_in = close(input_f);
	error3(res_in, buff);
	res_in = close(output_f);
	error3(res_in, buff);
	free(buff);
	return (0);
}
/**
 * error1 - handles reading errors
 * @file: file to read from
 * @buff: buffer
 * @argument: input argument
 * Return: 98
 */
void error1(int file, char *buff, char *argument)
{
	if (file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argument);
		free(buff);
		exit(98);
	}
}
/**
 * error2 - handles writing errors
 * @file: file to read from
 * @buffer: buffer
 * @argument: input argument
 * Return: 99
 */
void error2(int file, char *buffer, char *argument)
{
	if (file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argument);
		free(buffer);
		exit(99);
	}
}
/**
 * error3 - handles closing errors
 * @file: file to close
 * @buffer: buffer
 * Return: 100
 */
void error3(int file, char *buffer)
{
	if (file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
		free(buffer);
		exit(100);
	}

}
