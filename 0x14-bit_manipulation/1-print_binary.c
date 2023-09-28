#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: number
 * Return: binary rep of a number
 */
void print_binary(unsigned long int n)
{
	int bit_position = sizeof(unsigned long int) * 8 - 1;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit_position >= 0)
	{
		unsigned long int mask = 1UL << bit_position;

		if ((n & mask) != 0)
		{
			started = 1;
			_putchar('1');
		} else if (started)
		{
			_putchar('0');
		}
		bit_position--;
	}
}
