#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of 0's and 1's
 * Return: int equivalent of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	number = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		number = number * 2 + (b[i] - '0');
		i++;
	}
	return (number);
}
