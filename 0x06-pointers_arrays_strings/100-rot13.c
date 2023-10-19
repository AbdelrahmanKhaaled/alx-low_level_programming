#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: checks input of function
 *
 * Return: returns 's' after encoding.
*/

char *rot13(char *s)
{
	int i;
	char *c = s;
	char arr[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		for (i = 0 ; i <= 52 ; i++)
		{
			if (*s == arr[j])
			{
				*s = arr2[j] + '0';
				break;
			}
		}
		s++;
	}
	return (c);
}
