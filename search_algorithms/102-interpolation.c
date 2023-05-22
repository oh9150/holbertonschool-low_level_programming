#include "search_algos.h"

/**
 * interpolation_search - searches for @value in an array of integers @array
 * using the interpolation search algorithm
 * @array: the array to search in
 * @size: the size of @array
 * @value: the value to look for
 * Return: the index at which @value is located, or -1 if it's not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0, pos;
	
	if (!array)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
