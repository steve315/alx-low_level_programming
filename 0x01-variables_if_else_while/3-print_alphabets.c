#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * displays alphabet
 * Return: 0
 */
int main(void)
{
	/*variable declaration*/
	char g;
	char d;

	g = 'a';
	d = 'A';
	while (g <= 'z')
	{
		putchar(g);
		g++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
return (0);
}
