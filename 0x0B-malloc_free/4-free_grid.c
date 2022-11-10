#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid created earlier
 * @grid: multidimentional array
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
