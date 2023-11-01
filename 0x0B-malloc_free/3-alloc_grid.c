#include "main.h"

/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: checks input of function
 * @height: checks input of function
 *
 * Return: returns a pointer to
 * a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(height * sizeof(*grid));
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (j = i ; j >= 0 ; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			grid[i][j] = 0;
	return (grid);
}

