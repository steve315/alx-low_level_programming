#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: factorial input
 * Return: 0 on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
