#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list.
 *
 * @head: checks input of function
 *
 * Return: returns the sum of all the data (n) of a dlistint_t linked list
 *         if the list is empty, return 0.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
