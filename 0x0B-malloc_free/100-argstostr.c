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
	unsigned int i, j, count;
	char *s;

	count = 0;
	for (i = 0 ; i < ac ; i++)
		for (j = 0 ; j < strlen(av[i]) ; j++)
			count++;
	s = malloc(count * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < ac ; i++)
			for (j = 0 ; j < strlen(av[i]) ; j++)
			{
				s += av[i][j];
				s += '\n';
			}
	}
	return (s);
}
