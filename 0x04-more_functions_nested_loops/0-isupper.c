#include <stdio.h>
/**
 * _isupper - checks if a character is uppercase
 * @c: param 1
 * Return: 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
