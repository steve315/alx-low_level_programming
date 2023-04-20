#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point - prog that prints opcodes
* @argc: argument count.
* @argv: array of pointer to arguments.
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i;
	int num_b;

	if (argc != 2)/*check argument number in cmd line*/
	{
		printf("Error\n");
		exit(1);
	}
	num_b = atoi(argv[1]);/*convert num_b to int */
	if (num_b < 0)/*num_b < 0?*/
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_b; i++)
	{
		printf("%02x", opcode[i] & 0xFF);/*opcode->hex*/
		if (i != num_b - 1)
			printf(" ");
	}
	printf("\n");/*print new line*/
	return (0);
}
