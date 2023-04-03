#include "main.h"
/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: input string
 * @accept: bytes to search for in s
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (&s[i]);
}
