#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * extracts the last digit of a random number and feed to a loop
 * Return: 0
 */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*finding the last digit of n*/
	if (n < 0)
	{
		last_d = (n * -1) % 10;
	}
	else
	{
		last_d = n % 10;
	}
	last_d = n % 10;
	/* start of if loop */
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else if (last_d < 6 && last_d > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
