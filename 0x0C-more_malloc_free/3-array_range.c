#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of array elements
 * @max: max value of array elements
 * Return: 0 on success
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int len;/*length of array*/

	len = 0;
	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
