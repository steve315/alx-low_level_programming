#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a:array
 * @size: size of diagonal
 * Return: 0 on success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 = s2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
