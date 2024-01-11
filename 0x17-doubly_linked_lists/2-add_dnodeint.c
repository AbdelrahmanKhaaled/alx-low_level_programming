#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: checks input of function
 * @n: checks input of function
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (new_node ? free(new_node), NULL : NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (dlistint_len(*head) == 0)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
