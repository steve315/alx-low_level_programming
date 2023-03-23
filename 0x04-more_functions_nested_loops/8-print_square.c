#include "main.h"
/**
 * print_square - function that prints a square followed by \n
 * @size: size of the square to be printed
 * Return: 0 on success
 */
void print_square(int size)
{
	int i, i2;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (i2 = 0; i2 < size; i2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
