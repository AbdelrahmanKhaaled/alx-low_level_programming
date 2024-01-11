#include "lists.h"

/**
 *  get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: checks input of function
 * @index: checks input of function
 *
 * Return: the nth node of a dlistint_t linked list
 *         if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
