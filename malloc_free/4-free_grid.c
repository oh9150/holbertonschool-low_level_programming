#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previously created
 * two-dimensional array
 * @grid: the array to free
 * @height: the height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(a);
}
