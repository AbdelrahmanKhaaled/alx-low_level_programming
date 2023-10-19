#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings.
 *
 * @s1: checks input of function
 * @s2: checks input of function
 *
 * Return: returns 0 if 's1' equal to 's2' or
 * -1 if 's1' less than 's2' or
 * 1 if 's1' greater than 's2'
*/

int _strcmp(char *s1, char *s2)
{
	unsigned long int i;

	if (strlen(s1) >= strlen(s2))
	{
		for (i = 0 ; i < strlen(s2) ; i++)
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] == s2[i])
				continue;
		}
		if (strlen(s1) == strlen(s2))
			return (0);
		return (s1[i]);
	}

	else
	{
		for (i = 0 ; i < strlen(s1) ; i++)
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] == s2[i])
				continue;
		}
		return ((int) s2[i] * -1);
	}
}
