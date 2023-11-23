#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list..
 *
 * @head: checks input of function
 * @n: checks input of function
 *
 * Return: returns the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	if (current == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
