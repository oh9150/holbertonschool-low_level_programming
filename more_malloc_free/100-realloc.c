#include "main.h"
#include <stdlib.h>

/**
 * _realloc - check description
 * @ptr: a pointer to the memory to reallocate
 * @old_size: the size of the memory to reallocate
 * @new_size: the ammount of bytes that will be reallocated from ptr
 *
 * Description: reallocates memory from [ptr] to a new memory location
 * using malloc and frees the old memory, if [new_size] > [old size],
 * doesn't initiallize the "added" memory, if [new_size] == [old_size],
 * doesn't do anything and returns [ptr], if [ptr] is null, then the
 * call is equivalent to malloc(new_size), for all values of [old_size]
 * and [new_size]; if [new_size] == 0 && [ptr] != NULL, then the call
 * is equivallent to free(ptr)
 *
 * Return: ptr or if [new_size] == 0, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_mem, *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	new_ptr = ptr;
	if (new_mem == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		new_mem[i] = new_ptr[i];
	free(ptr);
	return (new_mem);
}
