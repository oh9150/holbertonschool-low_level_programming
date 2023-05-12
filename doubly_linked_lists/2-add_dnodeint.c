#include "lists.h"

/**
 * add_dnodeint - adds a node at the beggining of a doubly linked list
 * @head: a pointer to the head of the list
 * @n: the value of the node
 *
 * Return: a pointer to the new head of the list, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head)
	{
		(**head).prev = new_node;
		new_node->next = *head;
	}

	return (new_node);
}
