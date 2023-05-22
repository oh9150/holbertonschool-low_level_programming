#include "search_algos.h"

/**
 * jump_search - searches for @value in a sorted array using jump search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the index where value was found, NULL if it wasn't found or array
 * == NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int n, i = 0, j = 0;

	if (!array)
		return (-1);

	n = sqrt(size);
	j = n;

	while (i <= size)
	{
		if (array[j] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += n, j += n;
	}
	printf("Value found between indexes [%d] and [%d]\n", i, j);

	while (i <= j)
		i++;

	if (array[i] == value)
		return (i);

	return (-1);
}
