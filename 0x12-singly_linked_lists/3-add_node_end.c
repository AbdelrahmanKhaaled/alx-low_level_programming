#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list..
 *
 * @head: checks input of function
 * @str: checks input of function
 *
 * Return: returns the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	current->next = new_node;

	return (new_node);
}
