#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: parameter1
 * Return: 1 on success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
