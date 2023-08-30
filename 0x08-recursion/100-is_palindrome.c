#include "main.h"

int _strlen(char *s);
int _is_pal(char *s, int i, int len);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (_is_pal(s, 0, _strlen(s)));
	}
}
/**
 * _strlen - returns the length os string s
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
/**
 * _is_pal - checks if a number is a palindrome
 * @s: input string
 * @i: positional interation
 * @len: length of string
 * Return: 1 on success
 */
int _is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	else
	{
		return (_is_pal(s, i + 1, len - 1));
	}
}
