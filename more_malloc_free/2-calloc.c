#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check description
 * @nmemb: the lenght of the array
 * @size: the size of each member of the array
 *
 * Description: allocates memory for an array of [nmemb] elements
 * of [size] bytes each using malloc and sets the memory to 0
 *
 * Return: a pointer to the array or if nmemb or size == 0,
 * returns NULL; or if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_arr = malloc(nmemb * size);
	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(new_arr + i) = 0;

	return (new_arr);
}
