#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string pointer
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{

		_putchar(*str++);
	}
	_putchar('\n');
}
