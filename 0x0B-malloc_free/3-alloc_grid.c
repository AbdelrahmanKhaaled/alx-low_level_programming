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

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	else
	{
		grid = malloc(width * height * sizeof(int));
		if (grid == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < width ; i++)
				for (j = 0 ; j < height ; j++)
					grid[i][j] = 0;
		}
	}
	return (grid);
}
