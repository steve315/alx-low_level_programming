#include <stdio.h>
#include "3-calc.h"

/**
 * get_opt_func - pointer to function that selects right function
 * Return: pointer to function to be executed
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t operands[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}
	};

	i = 0;
	while (operands[i].op)
	{
		if (strcmp(operands[i].op, s) == 0)
		{
			return (operands[i].f);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
