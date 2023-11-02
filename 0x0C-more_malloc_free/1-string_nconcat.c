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
	unsigned int i;
	char *str;

	if (n >= strlen(s2))
		n = strlen(s2);
	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	if (s2 == NULL)
		s2 = '\0';
	for (i = 0 ; i < strlen(s1) + n ; i++)
	{
		if (i < strlen(s1))
			str[i] = s1[i];
		else
			str[i] = s2[i - strlen(s1)];
	}
	str[i] = '\0';
	return (str);
}
