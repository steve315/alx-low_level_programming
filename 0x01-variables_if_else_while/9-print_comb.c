#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Program that prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	char a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}

