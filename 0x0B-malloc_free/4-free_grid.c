#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: No return value.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
