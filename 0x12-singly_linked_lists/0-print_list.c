#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: checks input of function
 *
 * Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	list_t current = h;
	int count;

	while (current != NULL)
	{
		printf("[%d] %s\n", current -> len, current -> str);
		current = current -> next;
		count++;
	}
	return (count);
}
