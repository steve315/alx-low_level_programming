#include "main.h"

int _is_prime(int n, int i);
/**
 * is_prime_number - returns 1 if number is prime
 * @n: number to check ifprime
 * Return: 1 if prime / 0 if otherwise
 */
int is_prime_number(int n)
{

	if ((n == 1) || (n <= 0))
	{
		return (0);
	}
	else
	{
		return (_is_prime(n, n - 1));
	}
}
/**
 * _is_prime - evaluates is a number is prime
 * @n: input
 * @i: loop iterator
 * Return: 1 if number is prime
 */

int _is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
		return (_is_prime(n, i - 1));
}
