#include "main.h"
#include <stdlib.h>

char *_strcat(char *dest, char *src);
int _strlen(char *s);
/**
 * argstostr - concatenates program arguments
 * @ac: argument count
 * @av: double pointer to arguments
 * Return: 0. returns the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int n, i;

	n = 0;

	if (av == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)/*i was 1 to skip the name */
	{
		n += _strlen(av[i]);
	}
	n = n + ac + 1;
	str = malloc(sizeof(char) * n);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++) /*i was previously 1*/
	{
		_strcat(str, av[i]);
	}
	return (str);
}
/**
 * _strcat - concatenates two strings
 * @dest: resulting string after concat
 * @src: string to add
 * Return: ) on success
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

	dest[l] = '\n';
	return (dest);
}
/**
 * _strlen - returns length of string
 * @s: input string
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
