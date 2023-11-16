#include "lists.h"

/**
 * free_list -  frees a list_t list.
 *
 * @head: checks input of function
 *
 * Return: returns void
*/

void free_list(list_t *head)
{
	list_t *node, *sec_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		sec_node = node->next;
		free(node->str);
		free(node);
		node = sec_node;
	}
}
