#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the amount of coins needed for change
 * @argc: argument count
 * @argv: pointers to the cli arguments
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int cents, coins, temp, index;

	int value[] = {25, 10, 5, 2, 1};

	coins = index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (value[index] != '\0')
	{
		if (cents >= value[index])
		{
			temp = cents / value[index];
			coins += temp;
			cents = cents - (value[index] * temp);
		}
		index++;
	}
	printf("%d\n", coins);
	return (0);

}
