#include "main.h"
/**
 * reverse_array - function that reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: 0 on success
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[(n - i) - 1];
		a[(n - i) - 1] = tmp;
	}
}
