#include "main.h"
/**
 * print_diagonal - function that prints diagonal n times
 * @n: number of times backslash (\) character is printed
 * Return: 0 on success
 */
void print_diagonal(int n)
{
	int i, i2;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (i2 = 0; i2 < n; i2++)
		{
			if (i2 == i)
			{
				_putchar(92);
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}

}
