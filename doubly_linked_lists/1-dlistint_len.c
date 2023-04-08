#include "lists.h"

/**
 * dlistint_len - returns the ammount of nodes in the list
 * @h: a node of the list
 *
 * Return: the ammount of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
