#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer the the new hash table, or if something went wrong, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	if (size <= 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = array;
	return (ht);
}
