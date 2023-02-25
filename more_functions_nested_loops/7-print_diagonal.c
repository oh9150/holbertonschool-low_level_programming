#include "main.h"

/**
 * print_diagonal - check description.
 * @n: the length of the diagonal.
 *
 * Description: prints a diagonal of length n.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
