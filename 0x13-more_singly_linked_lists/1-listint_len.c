#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list.
 *
 * @h: checks input of function
 *
 * Return: returns the number of elements in a linked list_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
