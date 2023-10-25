#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 *
 * @s1: checks input of function
 * @s2: checks input of function
 *
 * Return: returns 1 if the strings
 * can be considered identical, otherwise return 0.
*/

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*' && s2[1] == '*')
		return (wildcmp(s1, ++s2));
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == s2[0])
		return (wildcmp(++s1, ++s2));
	else if (s2[0] == '*' && s1[0] != s2[1])
		return (wildcmp(++s1, s2));
	else if (s2[0] == '*' && s1[0] == s2[1])
		return (wildcmp(s1, ++s2));
	else
		return (0);
}
