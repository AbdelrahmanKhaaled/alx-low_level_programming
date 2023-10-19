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
	int arr[5] = {4, 3, 0, 7, 1};
	char arr2[5] = {'A', 'E', 'O', 'T', 'L'};
	char arr3[5] = {'a', 'e', 'o', 't', 'l'};


	while (*c)
	{

		for (i = 0 ; i < 5 ; i++)
		{
			if (*c == arr2[i] || *c == arr3[i])
				*c = arr[i] + '0';
		}
		c++;
	}

	return (cp);
}
