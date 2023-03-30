#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: inter to be printed
 * Return: 0 on success
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
