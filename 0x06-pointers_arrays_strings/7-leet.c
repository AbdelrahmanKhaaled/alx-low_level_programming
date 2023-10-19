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
	int arr[5] = {4, 3, 0, 7, 1};
	char arr2[5] = {'A', 'E', 'O', 'T', 'L'};
	char arr3[5] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0 ; i < strlen(s) ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == arr2[j] || s[i] == arr3[j])
				s[i] = arr[j];
		}
	}

	return (s);
}
