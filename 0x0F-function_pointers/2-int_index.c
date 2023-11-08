#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: checks input of function
 * @size: checks input of function
 * @cmp: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *       otherwise always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (array[i]);
		}
	}
	return (-1);
}
