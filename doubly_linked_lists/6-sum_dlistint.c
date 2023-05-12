#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the values in the list
 * @head: the head of the list
 * Return: the sum of all the values
 */
int sum_dlistint(dlistint_t *head)
{
	int n;

	if (!head)
		return (0);

	n = head->n;
	while (head->next)
	{
		head = head->next;
		n += head->n;
	}

	return (n);
}
