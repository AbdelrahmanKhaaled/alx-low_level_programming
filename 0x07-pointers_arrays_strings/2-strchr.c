#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: checks input of function
 * @c: checks input of function
 *
 * Return: returns pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	unsigned long int i;
	char *ptr;

	*ptr = NULL;
	for (i = 0 ; i <= strlen(s) ; i++)
	{
		if (s[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
	}

	return (ptr);
}
