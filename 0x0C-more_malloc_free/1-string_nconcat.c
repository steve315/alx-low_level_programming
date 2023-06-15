#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates s1 with n bytes of s2
 * @s1: param 1
 * @s2: param 2
 * @n: bytes of s2 to add to s1
 * Return: 0 on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len, x, y;

	i = j = len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0';)
	{
		i++; /*length of s1*/
	}
	for (j = 1; *(s2 + j) != '\0';)
	{
		j++; /*length of s2*/
	}
	if (n >= j)/*if n is >= j use entire s2's length*/
	{
		n = j;
	}
	len = (i + n) + 1;/*length of s3 to use for memory allocation*/
	s3 = malloc(sizeof(*s3) * len);
	if (s3 == 0)
	{
		free(s3);
		return (NULL);
	}
	for (x = 0; *(s1 + x) != '\0'; x++)
		*(s3 + x) = *(s1 + x);/*copy string s1 to s3*/
	for (y = 0; y < n; y++)
	{
		*(s3 + x) = *(s2 + y);/*copy n bytes of s2 to s3*/
		x++;
	}
	s3[x] = '\0';

	return (s3);
}
