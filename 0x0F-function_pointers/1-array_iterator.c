#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *on each element of an array.
 *
 * @array: checks input of function
 * @size: checks input of function
 * @action: checks input of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action && size != 0)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}
