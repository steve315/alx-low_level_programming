#include "main.h"
/**
 * clear_bit - sets the value to 0 at a given index
 * @n: number literal
 * @index: index to which bit is changed
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin_mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~bin_mask;
	return (1);
}
