#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * displays the alphabet with the exception of q and e
 * Return: 0
 */
int main(void)
{
	/*variable declarations*/
	char g;

	g = 'a';
	while (g <= 'z')
	{
		if (g == 'q' || g == 'e')
		{

		}
		else
		{
			putchar(g);
		}
		g++;
	}
	putchar('\n');
return (0);
}
