#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory to allocate
 * Return: 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
