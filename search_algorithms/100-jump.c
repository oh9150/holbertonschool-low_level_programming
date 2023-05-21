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
	int n, i;

	if (!array)
		return (-1);

	n = sqrt(size);
	i = n;
	while (array[i])
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]", i - n, i);
			break;
		}
		i += n;
	}

	while (array[i] > value)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		i--;
	}

	if (array[i] == value)
	{
		printf("Found %d at index: %d", value, i);
		return (i);
	}
	return (-1);
}
