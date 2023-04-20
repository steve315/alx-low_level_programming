#include "function_pointers.h"
/**
 * int_index - function that serched for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: index of the first element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
			{
				return (i); /*returns the index of the element that matches*/
			}
		}
	}
	return (-1);
}
