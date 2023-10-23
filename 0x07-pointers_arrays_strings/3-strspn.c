#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: checks input of function
 * @accept: checks input of function
 *
 * Return: returns  the number of bytes in the initial segment of s
 *which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned long int i, j;
	unsigned int count;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		for (j = 0 ; j < strlen(accept) ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
