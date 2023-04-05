#include "lists.h"

/**
 * add_node - adds a node at the beggining of a linked list
 * @head: a pointer to the head of the list
 * @str: the string to copy
 *
 * Return: a pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->next = *head;
	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free (new_head);
		return (NULL);
	}
	return (new_head);
}
