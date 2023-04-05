#include "main.h"

int _sqr_rt(int n, int rt);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square of the number
 * Return: 0 on success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqr_rt(n, 0));
	}
}
/**
 * _sqr_rt - function to calculate the square root given n and rt
 * @n: input
 * @rt: incremented untill the square root id found
 * Return: square root
 */

int _sqr_rt(int n, int rt)
{
	if (rt * rt > n)
	{
		return (-1);
	}
	if (rt * rt == n)
	{
		return (rt);
	}
		return (_sqr_rt(n, rt + 1));
}
