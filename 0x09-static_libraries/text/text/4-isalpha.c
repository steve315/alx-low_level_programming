#include "main.h"
/**
 * _isalpha - checks of a character is alphabetic
 * @c: param specifying the input character
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
