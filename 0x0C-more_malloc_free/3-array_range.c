#include "main.h"

/**
 * array_range -  creates an array of integers.
 *
 * @min: checks input of function
 * @max: checks input of function
 *
 * Return: returns the pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	for (i = min ; i < max ; i++)
		arr[i - min] = i;

	return (arr);
}
