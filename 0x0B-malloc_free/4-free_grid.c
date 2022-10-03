#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - is a function that frees a 2 dimensional grid
 * previously created by the alloc_grid function
 * @grid: is the grid to be freed
 * @height: is the height of the grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
