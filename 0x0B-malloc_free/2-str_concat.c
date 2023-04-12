#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combines twi strings
 * @s1: input string1
 * @s2: input string2
 * Return: concatenated string;
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x, l, i, j = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		l++;
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		l++;
	}
	s3 = malloc(sizeof(*s3) * ++l);
	if (s3 == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++) /* similar to _strcat implementation*/
	{
		*(s3 + i) = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; j++) /*_strcat implementation*/
	{
		*(s3 + i) = *(s2 + j);
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
