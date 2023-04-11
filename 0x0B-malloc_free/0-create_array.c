#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and initialize an array with char
 * @size: size of array
 * @c: char to initialize array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ar = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
