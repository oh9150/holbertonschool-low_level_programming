#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 *
 * return: null
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
		head = head->next;

	while (head->prev)
	{
		head = head->prev;
		free(head->next);
	}
	free(head);
}
