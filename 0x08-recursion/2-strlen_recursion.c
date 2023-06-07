
#include "main.h"
/**
 * _strlen_recursion - function that returns len of string
 * @s: input string
 * Return: 0 on success
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

	/**
	 * if (*s != '\0')
	 {
	 len = len + 1;
	 len += _strlen_recursion(s + 1);
	 }
	 return (len);
	 */
}
