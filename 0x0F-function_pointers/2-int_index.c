#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: checks input of function
 * @size: checks input of function
 * @cmp: checks input of function
 *
 * Return: returns elem of array if is exist
 *    otherwise always -1 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
