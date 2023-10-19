#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: checks input of function
 *
 * Return: returns 's' with capitalizes all words of a string.
*/

char *cap_string(char *s)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (s[i] == 32)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if (s[i] == 46)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if (s[i] == 92)
		{
			if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] -= 32;
		}
	}

	return (s);
}
