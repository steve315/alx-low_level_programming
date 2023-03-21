#include <stdio.h>
/**
 * main -  entry point
 * print_alphabet - prints letters of the alphabet in lowecase
 * @parameter: null
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
}
