#include "main.h"

/**
 * print_line - check description
 * @n: the length of the line.
 *
 * Description: prints a line of length n.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

