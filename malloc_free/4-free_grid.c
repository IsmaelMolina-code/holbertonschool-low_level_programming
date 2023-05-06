#include "main.h"

/**
 * free_grid - function to free a bi-dimensional grid
 *
 * @grid: the grid
 *
 * @height: of the grid
 *
 * Return: grid.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
