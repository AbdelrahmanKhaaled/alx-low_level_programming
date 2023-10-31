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

	grid = malloc(height * sizeof(int));
	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}
	for (j = 0 ; j < height ; j++)
	{
		grid[j] = malloc(width * sizeof(int));
		if (grid == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < width ; i++)
			grid[j][i] = 0;
		}
	}
	return (grid);
}

