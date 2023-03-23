#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - check description
 * @array: the array of elements to execute the function on
 * @size: the size of [array]
 * @action: the function to execute on each element of [array]
 *
 * Description: executes the function pointed to by [action] on each
 * element of [array]
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
