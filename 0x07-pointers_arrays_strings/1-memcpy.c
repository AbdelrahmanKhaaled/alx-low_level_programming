#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: checks input of function
 * @src: checks input of function
 * @n: checks input of function
 *
 * Return: returns a pointer to 'dest'
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
