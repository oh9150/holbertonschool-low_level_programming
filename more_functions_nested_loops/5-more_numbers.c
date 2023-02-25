#include "main.h"

/**
 * more_numbers - check description
 *
 * Description: prints numbers 1 to 14 followed by a newline
 * 10 times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j - (j % 10)));
			_putchar(j % 10);
		}
		_putchar('\n');
	}
}
