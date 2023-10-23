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
	char *ptr = NULL;
	bool flag;

	i = 0;
	flag = true;
	for (j = 0 ; j < strlen(haystack) ; j++)
	{
		if (needle[i] == '\0')
			break;
		if (needle[i] == haystack[j])
		{
			if (flag)
			{
				ptr = needle;
				flag = false;
			}
			i++;
		}
		else
			break;
	}
	if (needle[i] != '\0')
		ptr = NULL;

	return (ptr);
}
