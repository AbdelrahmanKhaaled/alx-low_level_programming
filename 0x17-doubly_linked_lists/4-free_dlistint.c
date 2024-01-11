#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: checks input of function
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *prev = head;

	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
}
