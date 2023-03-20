#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Program that prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	/*variable declarations*/
int a, b, c;
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
		if (a < b)
		{
			for (c = 0; c < 10; c++)
			{
				if (b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a != 7 || b != 8 || c != 9)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	}
putchar('\n');
return (0);
}
