#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: checks input of function
 *
 * Return: returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
