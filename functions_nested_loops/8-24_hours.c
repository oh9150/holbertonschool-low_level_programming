#include "main.h"

/**
 * jack_bauer - check description.
 *
 * Description: prints all the minutes in a day.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i > 9)
				_putchar('0' + (i - (i % 10)) / 10);       	
			else
				_putchar('0');
			_putchar('0' + i % 10);
			_putchar(':');
			if (j > 9)
				_putchar('0' + (j - (j % 10)) / 10);
			else
				_putchar('0');
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
