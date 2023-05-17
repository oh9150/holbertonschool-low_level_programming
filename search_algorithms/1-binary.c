#include "search_algos.h"

/**
 * binary_search - searches through a sorted array using binary search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the index where @value is located, -1 if it's not in the array or
 * == NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (r > size)
		return (-1);

	while (l <= r)
	{
		m = (l + r)/2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
