#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Program that prints all possible combinations of single digit numbers
 * Return: 0
 */

int main(void)
{
	/* variable declaration*/
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8 || b != 9)
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
