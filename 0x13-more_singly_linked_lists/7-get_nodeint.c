#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: checks input of function
 * @index: checks input of function
 *
 * Return: returns the nth node of a listint_t linked list..
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = malloc(sizeof(listint_t));

	current = head;
	while (index--)
	{
		current = current->next;
	}
	return (current);
}
