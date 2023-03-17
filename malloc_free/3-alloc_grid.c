#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a
 * two-dimensional array and initiallizes all
 * elements to '0'
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the array or NULL if it fails to allocate
 * or NULL if [width] or [height] <= 0
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * width);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < width; i++)
		array[i] = (int *)malloc(sizeof(int) * height);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	return (array);
}
