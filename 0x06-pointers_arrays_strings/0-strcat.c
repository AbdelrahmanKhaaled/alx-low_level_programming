#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: checks input of function
 * @src: checks input of function
 *
 * Return: returns concatenates of 'dest' and 'src'
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0 ; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
