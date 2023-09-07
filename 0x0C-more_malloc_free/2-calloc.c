#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: elements in the array
 * @size: size of the elements in the array
 * Return: 0 on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, (nmemb * size));
	return (p);
}
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: size of bytes to fill
 * Return: 0 pn success
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;
	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
