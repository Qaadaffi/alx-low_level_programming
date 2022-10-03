#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - is a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 * Return: NULL if there is a failure and if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	/* if width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* create an array of pointers */
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);

			free(grid);
			return (NULL);
		}
	}

	/* initialize all values in the array to 0 */
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
