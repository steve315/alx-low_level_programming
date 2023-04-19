#include "function_pointers.h"
#define NULL 0
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

	if (size <= 0)
	{
		return (-1);/*returns if size<= 0*/
	}
	if (array != NULL && cmp != NULL)
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
