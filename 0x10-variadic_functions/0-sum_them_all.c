#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all arguments
 * @n: argument
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
