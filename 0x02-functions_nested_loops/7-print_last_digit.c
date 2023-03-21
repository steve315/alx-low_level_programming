#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: function parameter that specifies the function arguments
 * Return: 0 on success
 */
int print_last_digit(int n)
{
	int l;
	
	l = n % 10;

	if (n < 1)
	{
		l = l * -1;
	}

	_putchar(l + '0');
	return (l);
}
