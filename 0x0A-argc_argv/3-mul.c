#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the product of two
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
