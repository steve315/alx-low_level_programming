#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 * Return: success 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t text_len;
	int written_b = 1;

	if (filename == NULL)
	{
		return (-1);
	}
	if (file_des == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		text_len = _strlen(text_content);
		written_b = write(file_des, text_content, text_len);
	}
	if (written_b == -1)
	{
		return (-1);
	}
	close(file_des);

	return (1);
}
/**
 * _strlen - function that returns the length of a string
 * @s: string pointer
 * Return: 0
 */
ssize_t _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
