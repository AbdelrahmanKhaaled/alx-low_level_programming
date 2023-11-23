#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: checks input of function
 * @index: checks input of function
 *
 * Return: returns 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	int number;

	current = *head;
	while (current != NULL && --index)
	{
		current = current->next;
	}
	if (current != NULL)
	{
		number = current->next->n;
		current->next = current->next->next;
	}
	else
	{
		return (-1);
	}
	return (1);
}
