#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - check description
 * @array: the array of integers
 * @size: the ammount of elements in [array]
 * @cmp: a pointer to a function to compare values
 *
 * Description: checks for the first element in [array] to not return 0
 * when using the function pointed to by [cmp]
 *
 * Return: the index of that said number, otherwise -1; if [size] <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
