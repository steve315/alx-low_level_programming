#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int value;
	char *ptr;

	value = 1;
	ptr = (char *) &value;
	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
