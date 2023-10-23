#include "main.h"
#include <stdbool.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: checks input of function
 * @needle: checks input of function
 *
 * Return: returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned long int i, j;
	char *ptr = needle;
	bool flag;

	i = 0;
	flag = false;
	for (j = 0 ; j < strlen(haystack) ; j++)
	{
		if (needle[i] == '\0')
			break;
		if (needle[i] == haystack[j])
		{
			flag = true;
			i++;
		}
		else if (flag)
			break;
	}
	if (needle[i] != '\0')
		ptr = NULL;

	return (ptr);
}
