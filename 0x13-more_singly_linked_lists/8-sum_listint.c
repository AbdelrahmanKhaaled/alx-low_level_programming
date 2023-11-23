#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *of a listint_t linked list.
 *
 * @head: checks input of function
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
*/

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
