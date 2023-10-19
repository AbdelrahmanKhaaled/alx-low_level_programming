#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: checks input of function
 * @src: checks input of function
 * @n: checks input of function
 *
 * Return: returns 'dest' after updated
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
