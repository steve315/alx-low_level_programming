#include <stdio.h>
/**
 * main - entry point
 * Return:0
 */
int main(void)
{
	long int n, divisor, bigFact;

	divisor = 2;
	n = 612852475143;

	while (n != 0)
	{
		if (n % divisor != 0)
		{
			divisor = divisor + 1;
		}
		else
		{
			bigFact = n;
			n = n / divisor;
			if (n == 1)
			{
				printf("%ld", bigFact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
