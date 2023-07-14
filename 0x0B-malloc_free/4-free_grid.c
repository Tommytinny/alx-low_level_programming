#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created
 * by alloc_grid function
 *
 * @grid: pointer to the 2-dimensional grid
 * @height: number of row in grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free memory for each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free memory for the grid itself */
	free(grid);
}
