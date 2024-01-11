#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: checks input of function
 * @idx: checks input of function
 * @n: checks input of function
 *
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (current->next != NULL)
	{
		if (index + 1 == idx)
		{
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
			current->next->prev = new_node;
			return (new_node);
		}
		index++;
		current = current->next;
	}
	if (index + 1 == idx)
	{
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}
	return (NULL);
}
