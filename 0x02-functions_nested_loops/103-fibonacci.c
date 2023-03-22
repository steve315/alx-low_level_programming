#include <stdio.h>
/**
 * main - entry point
 * program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i, n;
        long int a, b;
        long int next_num, max, sum;
	
	a = 1;
	b = 2;
	n = 50;
	next_num = a + b;
	max = 4000;
	sum = 2;

	for (i = 3; i <= n; i++)
	{
		if (next_num < max)
		{
			a = b;
			b = next_num;
			next_num = a + b;
		if ((next_num % 2) == 0 && next_num < max)
			{
				sum += next_num;
			}
		else
			{
				sum = sum;
			}
		}
		else
		{
			break;
		}
	}
	printf("%ld", sum);
	printf("\n");
return (0);
}
