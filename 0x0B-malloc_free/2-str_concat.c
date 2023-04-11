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
	int l1, l2, l3, i, j = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	l3 = l1 + l2;
	s3 = (char *) malloc(l3 * sizeof(char));
	if (s3 == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(s3 + i) = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(s3 + i) = *(s2 + j);
		i++;
	}
	return (s3);
}
