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
	int cents;
	int coins = 0;
	int rem = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents % 25 < 25)
	{
		coins += cents / 25;
		rem += cents % 25;
		if (rem % 10 < 10)
		{
			coins += rem / 10;
			rem = rem % 10;

			if (rem % 5 < 5)
			{
				coins += rem / 5;
				rem = rem % 5;
				if (rem % 2 < 2)
				{
					coins += rem / 2;
					rem = rem % 2;

					if (rem % 1 < 1)
					{
						coins += rem / 1;
						rem = rem % 1;
					}
				}
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
