#include "main.h"

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
	int i, count;

	count = 0;
	for (i = strlen(dest) ; (i < (strlen(dest) + strlen(src)))
		&& (i < (strlen(dest) + n)) ; i++)
		dest[i] = src[count++];
	return (dest);
}