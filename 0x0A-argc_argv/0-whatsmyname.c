#include <stdio.h>
/**
 * main - program that prints its name followed by \n
 * @argc: cmnd argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
