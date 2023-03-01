#include "main.h"

/**
 * swap_int - check description
 * @a: int #1
 * @b: int #2
 *
 * Description: swaps the value of a and b.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aa;

	aa = *a;
	*a = *b;
	*b = aa;
