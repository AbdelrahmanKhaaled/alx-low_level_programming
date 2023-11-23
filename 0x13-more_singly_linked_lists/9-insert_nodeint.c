#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: checks input of function
 * @idx: checks input of function
 * @n: checks input of function
 *
 * Return: returns the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;

	current = *head;
	new_node->n = n;
	while (current != NULL && --idx)
	{

		current = current->next;
	}
	if (index == 0)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
