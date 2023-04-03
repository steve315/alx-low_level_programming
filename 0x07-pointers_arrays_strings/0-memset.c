#include "main.h"
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
