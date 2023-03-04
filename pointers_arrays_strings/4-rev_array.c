#include "main.h"

/**
 * reverse_array - check description
 * @a: the array to reverse
 * @n: the number of elements in a
 *
 * Description: reverses the content of a
 *
 * Return: void
 */
void reverse_array(int *a, int *n)
{
	int value;
	int i;

	for (i = 0; i < *n; i++)
	{
		value = a[i];
		a[i + 1] = a[*n - i];
		a[n - i] = value;
	}
}
