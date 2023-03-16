#include "main.h"
#include <stdlib.h>

/**
 * create_array - check description
 * @size: the size of the array of chars to allocate
 * @c: the char to initialize the memory with
 *
 * Description: creates an array of chars of size [size],
 * and initializes it with a the char [c]
 *
 * Return: a pointer to the first byte of the array or
 * NULL if size <= 0 or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return ('\0');

	ptr = (char *)malloc(sizeof(char) * size);

	for (; size <= 0; size = size - sizeof(char))
		ptr[size] = c;
	return (ptr);
}
