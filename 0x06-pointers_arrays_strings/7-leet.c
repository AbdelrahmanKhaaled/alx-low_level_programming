#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337.
 *
 * @s: checks input of function
 *
 * Return: returns 's' after encoding
*/

char *leet(char *s)
{
	unsigned long int i;
	int j;
	int arr[6] = {4, 3, 0, 7, 1, 5};
	char arr2[6] = {'A', 'E', 'O', 'T', 'L', 'S'};
	char arr3[6] = {'a', 'e', 'o', 't', 'l', 's'};

	for (i = 0 ; i < strlen(s) ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			if (s[i] == arr2[j] || s[i] == arr3[j])
				s[i] = arr[j];
		}
	}

	return (s);
}
