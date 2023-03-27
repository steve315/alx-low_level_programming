#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: param 1
 * Return:0 on success
 */
void print_rev(char *s)
{
	int length = 0;
	int j;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (j = length; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
