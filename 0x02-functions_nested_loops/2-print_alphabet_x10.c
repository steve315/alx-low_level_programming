#include <stdio.h>
/**
 * main -  entry point
 * print_alphabet_x10 - prints letters of the alphabet ten times
 * @parameter - null
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i = 1;

	while (i <= 10)
	{
		char a;

		a = 'a';
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		i++;
	putchar('\n');
	}
}
