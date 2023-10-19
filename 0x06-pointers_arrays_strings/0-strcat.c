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
	unsigned long int i;
	int count;

	count = 0;
	for (i = strlen(dest) ; i < (strlen(dest) + strlen(src) + 1) ; i++)
		dest[i] = src[count++];
	return (dest);
}
