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

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			n3 = n2 * n1;
			if (n3 > 9)
				_putchar('0' + (n3 - (n3 % 10))/10);
			_putchar('0' + (n3 % 10));
			write(1, ", ", 2);
		}
		_putchar('\n');
	}
}
