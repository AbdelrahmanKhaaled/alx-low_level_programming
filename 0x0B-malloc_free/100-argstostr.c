#include "main.h"

/**
 * argstostr - concatenates all the argument of your program
 *
 * @ac: checks input of function
 * @av: checks input of function
 *
 * Return: returns NULL if 's' is NULL
 * otherwise 's'
*/

char *argstostr(int ac, char **av)
{
	int i, count, cmpt = 0;
	unsigned int j;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		for (i = 0 ; i < ac ; i++, count++)
			count += strlen(av[i]);
		s = malloc(count * sizeof(char) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < ac ; i++)
			{
				for (j = 0 ; av[i][j] != '\0' ; j++ , cmpt++)
					s[cmpt] = av[i][j];
				s[cmpt] = '\n';
				cmpt++;
			}
		}
	}
	return (s);
}
