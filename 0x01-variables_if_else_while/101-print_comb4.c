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
	int o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			for (o = 0; o < 10; o++)
			{
				if (o < 9)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
