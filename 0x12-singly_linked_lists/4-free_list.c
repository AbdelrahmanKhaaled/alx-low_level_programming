#include "lists.h"

/**
 * _memcpy - mem copy src to dest
 *
 * @head: checks input of function
 *
 * Return: returns 'dest'
*/

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
