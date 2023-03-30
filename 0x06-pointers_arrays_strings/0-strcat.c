#include "main.h"
/**
 * *_strcat - function to concatenate two strings
 * @dest: resulting string
 * @src: source string
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int j = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[j] != '\0')
	{
		dest[l] = src[j];
		l++;
		j++;
	}

	dest[l] = '\0';
	return (dest);
}
