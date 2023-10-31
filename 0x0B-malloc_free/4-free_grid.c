#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previousley
 *  created your alloc_grid function.
 *
 * @grid: checks input of function
 * @height: checks input of function
 *
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
