#include <stdio.h>
/**
 * main - entry point
 * program that prints the first 50 numbers of the fibbonacci
 * Return: 0 on success
 */
int main(void)
{
	int i, n;
	int a, b;
	int next_num;

	a = 1;
	b = 2;
	/*first 50 numbers of the fibbonacci*/
	n = 50;
	next_num = a + b;


	printf("%d, %d, ", a, b);

	for (i = 3; i <= n; i++)
	{
		if (i < n)
		{
			printf("%d, ", next_num);
		}
		else if (i == n)
		{
			printf("%d", next_num);
		}
		a = b;
		b = next_num;
		next_num = a + b;
	}
printf("\n");
return (0);
}
