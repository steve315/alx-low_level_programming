#include <stdio.h>
/**
 * main -  entry point
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int c;
	unsigned long int c1;
	unsigned long int c2;

	b = 1;
	c = 2;
	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", c1 + (c2 / 1000000000));
		printf("%lu", c2 % 1000000000);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}
	printf("\n");
return (0);
}
