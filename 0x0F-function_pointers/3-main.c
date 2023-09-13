#include <stdio.h>
#include "3-calc.h"

/**
* main - calc entry poimts
* @argc: argument count
* @argv: array of arguments passed in cli
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char op;
	int num1, num2;
	int result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(2);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(3);
	}
	result = function(num1, num2);
	printf("%d\n", result);
	return (0);
}
