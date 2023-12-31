#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the 2 dimensional grid created with alloc_grid
 * @grid: grid array to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


