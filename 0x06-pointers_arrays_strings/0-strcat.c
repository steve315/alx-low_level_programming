#include "main.h"
/**
 * *_strcat - function to concatenate two strings
 * @dest: resulting string
 * @src: source string
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int d, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[s] = '\0';
return (dest);
}
