#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 *
 * return: null
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
		head = head->next;
	while (head->prev)
	{
		free(head->next);
		head = head->prev;
	}
	free(head);
}
