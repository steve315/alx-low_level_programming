#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Program that prints single numbers from upto 10 using putchar
 * Return: 0
 */
int main(void)
{
	/*variable declaration*/
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
return (0);
}
