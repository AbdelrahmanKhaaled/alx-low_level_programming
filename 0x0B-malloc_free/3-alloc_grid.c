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
	if (width < 1 || height < 1 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0 ; j < height ; j++)
		{
			grid[j] = malloc(width * sizeof(**grid));
			if (grid[j] == NULL)
			{
				return (NULL);
			}
			else
			{
				for (i = 0 ; i < width ; i++)
					grid[j][i] = 0;
			}
		}
	}
	return (grid);
}

