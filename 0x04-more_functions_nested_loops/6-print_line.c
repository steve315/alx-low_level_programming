#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times dash character is printed
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			if (i == n)
			{
				_putchar('\n');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
