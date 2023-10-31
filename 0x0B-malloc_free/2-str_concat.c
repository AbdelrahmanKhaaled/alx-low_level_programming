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
	int i;
	char *m;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		m = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		if (m == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < strlen(s1) ; i++)
				m[i] = s1[i];
			for (i = strlen(s1) ; i < (strlen(s1)  + strlen(s2)) ; i++)
				m[i] = s1[i - strlen(s1)];
		}
	}
	return (m);
}
