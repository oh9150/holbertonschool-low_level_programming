#include "function_pointers.h"

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
	int i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
