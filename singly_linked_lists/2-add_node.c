#include "lists.h"

/**
 * add_node - adds a node at the beggining of a linked list
 * @head: a pointer to the head of the list
 * @str: the string to copy
 *
 * Return: a pointer to the new head of the list, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));
	int len;

	for (len = 0; *(str + len * sizeof(char)) == '\0'; len++)
		;

	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->str = strdup(str);
	new_head->len = len;
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	if (head == NULL)
		new_head->next = NULL;
	else
		new_head->next = *head;


	return (new_head);
}
