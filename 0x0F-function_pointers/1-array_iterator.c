#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: name of the array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
}