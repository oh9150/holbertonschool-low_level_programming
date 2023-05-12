#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index @index and retuns a pointer
 * to it
 * @head: the head of the list
 * @index: the index to get
 *
 * return: pointer to the index or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while ((i <= index) && (tmp->next))
	{
		tmp = tmp->next;
		i++;
	}
	tmp = tmp->prev;
	if (index > i)
		return (NULL);

	return (tmp);
}
