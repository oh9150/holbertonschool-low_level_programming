#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer the the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
