#include <stdio.h>
/**
 * main -entry point
 * Return: 0 on success
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		else
		{
			sum = sum;
		}
	}
	printf("%d\n", sum);
}
