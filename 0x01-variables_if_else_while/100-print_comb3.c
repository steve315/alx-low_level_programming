#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Program that prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	/* variable declaration */
	int n;
	int m;

	for (n = 48; n < 56; n++)
	{
		for (m = 48; m < 57; m++)
		{
			if (m > n)
			{
				putchar(m);
				putchar(n);
				if (n != 48 || m != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
