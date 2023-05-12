#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1, 0 on fail
 */
int hash_table_set(hash_table_t *ht, const unsigned char *key, const char *value)
{
	size_t index = key_index(key, ht->size);
	hash_node_t *new_node;
	array = ht->array;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->value = strdup(value);
	if (new_node->value)
		return (0);

	if (*array[index])
		new_node->next = *array[index];

	ht->*array[index] = new_node;
		
	return (1);
}
