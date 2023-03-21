#include "main.h"
/**
 * print_alphabet_x10 - prints letters of the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char a;

		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
	_putchar('\n');
	}
}
