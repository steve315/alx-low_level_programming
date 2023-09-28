#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get to another num.
 * @n: input number
 * @m: input number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;


	result = n ^ m;
	count = 0;

	while (result > 0)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}
