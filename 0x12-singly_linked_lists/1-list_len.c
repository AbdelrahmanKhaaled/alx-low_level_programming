#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: checks input of function
 *
 * Return: returns the number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
	list_t *current = h;
	size_t count;

	while (current != NULL)
	{
		count++;
		current = current -> next;
	}
	return (count);
}
