#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: checks input of function
 * @accept: checks input of function
 *
 * Return: returns a pointer to the byte in s
 * that matches one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned long int i, j;
	char *ptr = NULL;

	for (i = 0 ; i < strlen(s) ; i++)
		for (j = 0 ; j < strlen(accept) ; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = s + i;
				return (ptr);
			}
		}
	return (ptr);
}
