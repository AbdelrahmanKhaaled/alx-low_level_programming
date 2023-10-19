#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: checks input of function
 *
 * Return: returns 's' with all uppercase letters
*/

char *string_toupper(char *s)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
