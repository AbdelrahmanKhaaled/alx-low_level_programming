#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @n: checks input of function
 * @s2: checks input of function
 * @s1: checks input of function
 *
 * Return: returns pointer str
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
