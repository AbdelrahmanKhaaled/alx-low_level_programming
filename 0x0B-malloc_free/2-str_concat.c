#include "main.h"

/**
 * str_concat - concatunites two strings.
 *
 * @s1: checks input of function
 * @s2: checks input of function
 *
 * Return: returns 'm'
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *m;

	if (s1 == NULL)
	{
		*s1 = "\0";
	}
	if (s2 == NULL)
	{
		*s2 = "\0";
	}
	else
	{
		m = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);

		if (m == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; s1[i] != '\0' ; i++)
				m[i] = s1[i];
			for (i = strlen(s1) ; s2[i - strlen(s1)] != '\0' ; i++)
				m[i] = s2[i - strlen(s1)];
			m[i] = '\0';
		}
	}
	return (m);
}
