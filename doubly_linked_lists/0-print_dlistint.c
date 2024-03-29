#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list
 * @h: a node of the list
 *
 * Return: the ammount of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
