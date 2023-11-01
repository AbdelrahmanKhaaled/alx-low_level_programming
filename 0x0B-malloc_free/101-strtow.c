#include "main.h"

/**
 * 
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *    otherwise always 0 (Success)
*/

char **strtow(char *str)
{
	unsigned int i;
	int width, height;
	int *arr;
	char **s;
	bool flagch = false;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
		{
			flagch = false;
			continue;
		}
		else if (str[i] != ' ' && flagch)
		{
			flagch = true;
			arr[height]++;
		}
		else if (str[i] != ' ')
		{
			arr[height]++;
			height++;
		}
	}

	s = malloc(height * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height; i++)
		{
			s[i] = malloc(arr[height] * sizeof(char));
			if (s[i] == NULL)
			{
				return (NULL);
			}
			for (j = 0 ; j < strlen(str) ; j++)
			{
				s[i] += str[j];
			}
		}

	}
}
