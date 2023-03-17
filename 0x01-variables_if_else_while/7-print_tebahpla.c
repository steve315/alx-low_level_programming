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

	g = 'z';
	while (g >= 'a')
	{
		putchar(g);
		g--;
	}
	putchar('\n');
return (0);
}
