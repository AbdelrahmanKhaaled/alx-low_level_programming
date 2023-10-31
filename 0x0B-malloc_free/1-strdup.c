#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contain a copy of the string given as a parameter
 *
 * @str: checks input of function
 *
 * Return: returns a pointer to a newly allocated space in memory,
 *  * which contain a copy of the string given as a parameter
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str != NULL)
	{
		s = malloc(strlen(str) * sizeof(char) + 1);
		if (s != NULL)
		{
			for (i = 0 ; i < strlen(str) ; i++)
				s[i] = str[i];
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
	return (s);
}
