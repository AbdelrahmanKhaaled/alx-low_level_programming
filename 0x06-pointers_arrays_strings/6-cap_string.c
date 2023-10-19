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
		if (s[i] == 32 || s[i] == 46 || s[i] == 33 || s[i] == 44
		|| s[i] == 59 || s[i] == 34 || s[i] == 63 || s[i] == 40
		|| s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if ((s[i] == 92 && s[i + 1] == 110) || (s[i] == 92 && s[i + 1] == 116))
		{
			if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] -= 32;
		}
	}

	return (s);
}
