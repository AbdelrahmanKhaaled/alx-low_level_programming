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
	size_t count;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
