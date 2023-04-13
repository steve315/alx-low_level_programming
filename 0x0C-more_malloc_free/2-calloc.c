#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: elements in the array
 * @size: size of the elements in the array
 * Return: 0 on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
