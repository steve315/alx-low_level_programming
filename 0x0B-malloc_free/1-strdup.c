#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string and returns a pointer to the new string
 * @str: input string
 * Return: pointer to the new string (dst)
 */
char *_strdup(char *str)
{
	int len;
	char *dst;
	int i;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	dst = (char *) malloc(len * sizeof(char));
	if (dst == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			dst[i] = str[i];
		}
		dst[i] = '\0';
	}
	return (dst);
	free(dst);
}
