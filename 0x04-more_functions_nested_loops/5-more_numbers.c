#include "main.h"
/**
 * more_numbers - function that prints numbers 0 - 14 : 14 times
 * Return: 0 on success
 */
void more_numbers(void)
{
	int r, i;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
