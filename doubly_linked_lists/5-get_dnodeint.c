#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index @index and retuns a pointer
 * to it
 * @head: the head of the list
 * @index: the index to get
 *
 * Return: a pointer to the index or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while ((index) && (head->next))
	{
		head = head->next;
		index--;
	}
	if (!(index == 0))
		return (NULL);

	return (head);
}
