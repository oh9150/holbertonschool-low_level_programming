#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: a pointer to the head of the list
 * @str: the string to copy
 *
 * Return: a pointer to the new node or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *current = *head;
	list_t *new_tail = malloc(sizeof(list_t));

	if (new_tail == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	for (len = 0; *(str + len) != '\0'; len++)
		;
	len++;
	if (*head == NULL)
	{
		*head = new_tail;
		current = new_tail;
		current->next = NULL;
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new_tail;
	new_tail->next = NULL;
	new_tail->str = strdup(str);
	new_tail->len = len;
	return (new_tail);
}
