#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 * Return:  1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des = open(filename, O_WRONLY | O_APPEND);
	ssize_t text_len;
	int written_b;

	if (filename == NULL)
	{
		return (-1);
	}
	if (file_des == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(file_des);
		return (-1);
	}
	text_len = _strlen(text_content);
	written_b = write(file_des, text_content, text_len);

	if (written_b == -1 || written_b != text_len)
	{
		close(file_des);
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
