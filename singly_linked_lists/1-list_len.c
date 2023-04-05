#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in a list
 */
size_t list_len(list_t *h)
{
	int i = 0;
	list_t *current = h;

	while (*current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
