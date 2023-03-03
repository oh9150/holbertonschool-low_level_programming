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
	int b[*n];
	int i;

	for (i = 0; i < *n; i++)
		b[i] = a[i];
	for (i = 0; i < *n; i++)
		a[i] = b[*n - i];
}
