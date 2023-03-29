#include "main.h"
/**
 * *_strncat - function to concatenate two strings by n bytes
 * @dest: resulting string
 * @src: source string
 * @n: number of bytes
 * Return: 0 on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int s;
	int d_len = 0;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[d_len + s] = src[s];
	}
	dest[d_len + s] = '\0';
	return (dest);
}
