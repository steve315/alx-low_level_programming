#include "main.h"
/**
 * _islower- checks is a character is lowecase
 * @c: parameter specifying the character to be checked
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
