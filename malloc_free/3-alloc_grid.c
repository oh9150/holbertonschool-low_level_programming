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
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
		array[i] = (int *)malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
