#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data (n)..
 *
 * @head: checks input of function
 *
 * Return: returns the head nodes data (n).
*/

int pop_listint(listint_t **head)
{
	int number;
	listint_t *current;

	current = *head;
	if (current == NULL)
		return (0);
	number = current->n;
	*head = current->next;
	return (number);
}
