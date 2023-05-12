#include "lists.h"

/**
 * add_node - adds a node at the beggining of a linked list
 * @head: a pointer to the head of the list
 * @str: the string to copy
 *
 * Return: a pointer to the new head of the list, NULL if it fails
 */
dlistint_t *add_node(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	*new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (head)
		*head->prev = new_node;

	return (new_head);
}
