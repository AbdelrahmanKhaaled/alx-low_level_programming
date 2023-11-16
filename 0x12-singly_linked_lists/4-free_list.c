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
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
