#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 *
 * @b: checks input of function
 *
 * Return: returns the converted number,
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number, counter;
	int i;
	char *c;

	if (b == NULL)
		return (0);
	c = malloc(strlen(b));
	counter = 0;
	for (i = (int) strlen(b) - 1 ; i >= 0 ; i--)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
		c[counter++] == b[i];
	}
	number = c[0] - 48;
	counter = 1;
	for (i = 1 ; i < (int) strlen(b) ; i++)
	{
		counter *= 2;
		number += (c[i] - 48) * counter;
	}
	free(c);
	return (number);
}
