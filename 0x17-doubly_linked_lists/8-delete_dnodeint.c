#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 *
 * @head: checks input of function
 * @index: checks input of function
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int idx = 0;

	if (!*head)
	{
		if (dlistint_len((*head)) == 1)
		{
			current = current->next;
			*head = current;
			return (1);
		}
		else
		{
			if (index == 0)
			{
				current = current->next;
				*head = current;
				return (1);
			}
			else
			{
				while (current != NULL)
				{
					if (idx == index)
					{
						current->prev->next = current->next;
						return (1); }
					idx++;
					current = current->next; } } } }
	return (-1);
}
