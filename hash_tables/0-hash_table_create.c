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
	int *ERROR_VALUE = NULL;

	if (size <= 0)
		return (ERROR_VALUE);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (ERROR_VALUE);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (ERROR_VALUE);
	}

	ht->size = size;
	ht->array = array;
	return (ht);
}
