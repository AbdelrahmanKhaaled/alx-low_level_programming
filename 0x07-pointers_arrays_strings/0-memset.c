#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: checks input of function
 * @b: checks input of function
 * @n: checks input of function
 *
 * Return: returns 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
