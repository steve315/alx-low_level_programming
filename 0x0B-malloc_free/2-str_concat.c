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
	unsigned int l, l2, i, j = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0'; l++);
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		l++;
	}
	s3 = malloc(sizeof(char *) * l);
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
