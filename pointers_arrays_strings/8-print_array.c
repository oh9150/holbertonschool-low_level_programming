#include "main.h"
#include <stdio.h>

/**
 * print_array - check description
 * @a: the array to print
 * @n: the number of elements to be printed
 *
 * Description: prints an array of integers,
 * separed by ", ", followed by a newline.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	n--;
	for (i = 0; i <= n; i++)
	{
		printf("%i", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
