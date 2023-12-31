#include "main.h"

/**
 * create_array - creats an array of chars,
 *  and initialize it with specfic char.
 *
 * @size: checks input of function
 * @c: checks input of function
 *
 * Return: returns NULL if 'size' equal to 0
 *   otherwise always pointer (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size != 0)
	{
		arr = malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0 ; i < size ; i++)
				arr[i] = c;
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
	return (arr);
}
