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
	list_t *current, *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node>next = NULL;

	current = *head;
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
