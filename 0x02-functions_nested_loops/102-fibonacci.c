#include <stdio.h>
/**
 * main - entry point
 * program that prints the first 50 numbers of the fibbonacci
 * Return: 0 on success
 */
int main(void)
{
	int i, n;
	long int a, b;
	long int next_num;

	a = 1;
	b = 2;
	/*first 50 numbers of the fibbonacci*/
	n = 50;
	next_num = a + b;


	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= n; i++)
	{
		if (i < n)
		{
			printf("%ld, ", next_num);
		}
		else if (i == n)
		{
			printf("%ld", next_num);
		}
		a = b;
		b = next_num;
		next_num = a + b;
	}
printf("\n");
return (0);
}
