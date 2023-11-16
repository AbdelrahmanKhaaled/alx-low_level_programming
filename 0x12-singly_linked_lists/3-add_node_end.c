#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list..
 *
 * @head: checks input of function
 * @str: checks input of function
 *
 * Return: returns the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node = malloc(sizeof(list_t));

	current = *head;
	if (!new_node || !head)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node>next = NULL;

	if (new_node->str)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	if (current == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (*head);
}
