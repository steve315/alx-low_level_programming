#include "main.h"
/**
 * _pow_recursion - return x to the power of y
 * @x: base
 * @y: power
 * Return: 0 on success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
