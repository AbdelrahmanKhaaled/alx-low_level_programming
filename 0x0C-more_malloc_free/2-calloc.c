#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: checks input of function
 * @size: checks input of function
 *
 * Return: returns a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	return (str);

}
