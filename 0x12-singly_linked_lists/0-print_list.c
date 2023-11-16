#include "lists.h"

/**
 * _strlen - number of characters.
 *
 * @s: checks input of function
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
	return (count);
}

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: checks input of function
 *
 * Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
