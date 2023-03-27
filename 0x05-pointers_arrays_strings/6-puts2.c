#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: pointer
 * Return: 0 on success
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *st = str;
	int b;

	while (*st != '\0')
	{
		length++;
		st++;
	}

	i = length - 1;

	for (b = 0; b <= i; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
