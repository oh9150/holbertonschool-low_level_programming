#include "main.h"

/**
 * times_table - check description
 *
 * Description: prints the times table from 0 to 9.
 *
 * Return: void
 */
void times_table(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 0; n1 <= 9; n++)
	{
		for (n2 = 0; n2 <= 9; n++)
		{
			n3 = n2 * n1;
			write(1, &n3, sizeof(n3));
			write(1, ", ", 2);
		}
		_putchar('\n');
	}
}
