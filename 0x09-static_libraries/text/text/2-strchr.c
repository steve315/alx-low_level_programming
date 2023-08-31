#include "main.h"
/**
 * _strchr - function that locates a character in string
 * @s: input string address
 * @c: character to search for
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	return (0);
}
