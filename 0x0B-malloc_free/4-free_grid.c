#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid from task 3
 * @grid: grid
 * @height: height of grid to free meory
 * Return: 0 on success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
