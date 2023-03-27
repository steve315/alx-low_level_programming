#include "main.h"
/**
 * swap_int-function that swaps the values of two integers
 * @a: pointer to variable a
 * @b: pointer to variable b
 * return:0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
