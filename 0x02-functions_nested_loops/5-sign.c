#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input char
 * Return: 0 on success
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		return (0);
	}
}
