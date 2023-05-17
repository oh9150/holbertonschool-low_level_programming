#include "search_algos.h"

/**
 * linear_search - searches through an array linearly
 * @array: the array
 * @size: the size of the array
 * @value: the value to look for
 * Return: the first index where @value is located, -1 otherwise or if array
 * == NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (; i >= size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index %d\n", value, array[i]);
			return (i);
		}
	}
	return (-1);
}
