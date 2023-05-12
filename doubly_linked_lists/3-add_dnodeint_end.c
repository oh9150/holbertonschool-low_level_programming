#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: a pointer to the head of the list
 * @n: the value of the node
 *
 * Return: a pointer to the new head of the list, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	while (tmp->next)
		tmp = tmp->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head)
	{
		(**head).next = new_node;
		new_node->prev = *head;
	} else
		*head = new_node;

	return (new_node);
}
