#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * program that prints all hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	/*declaring variables*/
	char a;
	char b;

	/*initialization*/
	a = 'a';
	b = 0;
	/*while loop to print hex numbers*/
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
