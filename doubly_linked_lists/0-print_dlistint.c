#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list
 * @h: a node of the list
 *
 * Return: the ammount of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int i;

	while (h->prev != NULL)
		h = h->prev;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
		printf("%d", h->n);
	}
	return (i);
}
