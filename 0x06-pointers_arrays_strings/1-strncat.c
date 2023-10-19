#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: checks input of function
 * @src: checks input of function
 * @n: checks input of function
 *
 * Return: returns concatenates of 'dest' and
 * n of chrarcter of 'src'
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0 ; (src[i] != '\0' && i < n); i++)
		dest[i + c] = src[i];
	dest[i + c] = '\0';
	return (dest);
}
