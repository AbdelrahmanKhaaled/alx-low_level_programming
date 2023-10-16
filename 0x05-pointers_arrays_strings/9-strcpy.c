#include "main.h"
#include <string.h>

/**
 * _strcpy - that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: checks input of function
 * @src: checks input of function
 *
 * Return: returns destination 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(src) ; i++)
		dest[i] = src[i];
	return (dest);
}
