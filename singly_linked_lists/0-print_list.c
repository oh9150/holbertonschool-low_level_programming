#include "lists.h"

/**
 * print_list - prints the linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(list_t *h)
{
	list_t *current = h;
	unsigned long int i = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		i++;
	}
	return (i);
}		
