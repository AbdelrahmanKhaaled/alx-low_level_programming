#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337.
 *
 * @c: checks input of function
 *
 * Return: returns 'c' after encoding
*/

char *leet(char *c)
{
	unsigned int i;
	char *cp = c;
	int arr[6] = {4, 3, 0, 7, 1, 5};
	char arr2[6] = {'A', 'E', 'O', 'T', 'L', 'S'};
	char arr3[6] = {'a', 'e', 'o', 't', 'l', 's'};


	while (*c)
	{

		for (i = 0 ; i < 6 ; i++)
		{
			if (*c == arr2[i] || *c == arr3[i])
				*c = arr[i] + '0';
		}
		c++;
	}

	return (cp);
}
