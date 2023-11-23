#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 *
 * @head: checks input of function
 *
 * Return: returns void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *sec_node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		sec_node = node->next;
		free(node);
		node = sec_node;
	}
	*head = NULL;
}
