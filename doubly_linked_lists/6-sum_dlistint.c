#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the values in the list
 * @head: the head of the list
 * Return: the sum of all the values
 */
int sum_dlistint(dlistint_t *head)
{
	int n = head->n;

	if (!head)
		return (NULL);

	while (head->next)
	{
		head = head->next;
		n += head->next;
	}

	return (n);
}
