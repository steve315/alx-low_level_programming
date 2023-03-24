#include "main.h"
/**
 * print_number- function that prints an integer
 * @n: param 1
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	} else
	{
		i = n;
	}
	if (i / 10)
	{
		_putchar(i / 10);
	}
	_putchar((i % 10) + '0');
}
