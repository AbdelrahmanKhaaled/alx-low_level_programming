#include "main.h"

/**
 * _strlen - number of characters.
 *
 * @str: checks input of function
 *
 * Return: returns number of characters
*/

int _strlen(char *s)
{
	int count;
	
	if (!s)
		return (0);
	while (*s++)
		count++;
	return(count);
}
