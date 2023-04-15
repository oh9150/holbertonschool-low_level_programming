#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to search
 * @size: the size of the array
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index;

	if (size == 0)
		return (0);

	index = hash_djb2(key);

	return (index % size);
}
