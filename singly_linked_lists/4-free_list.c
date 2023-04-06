#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer the the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	int i = 0, j = 0;
	list_t *current = head;

	while (head != NULL)
	{
		while (current->next != NULL)
			current = current->next;

		free(current->next);
		current = head;
	}
}
