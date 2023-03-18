#include "main.h"
#include <stdlib.h>

/**
 * array_range - check description
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Description: creates an array that contains all values from
 * [min] to [max], ordered from [min] to [max]
 *
 * Return: a pointer to the new array, or if min > max, NULL;
 * or if malloc fails, NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *new_arr;

	if (min > max)
		return (NULL);
	new_arr = malloc(sizeof(int) * (max - min + 1));
	if (new_arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(new_arr + i) = min;
		min++;
	}
	return (new_arr);
}
