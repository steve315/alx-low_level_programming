#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - returns the product of two
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, n, t, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		t = atoi(argv[i]);
		sum = sum + t;
	}
	printf("%d\n", sum);
	return (0);
}
