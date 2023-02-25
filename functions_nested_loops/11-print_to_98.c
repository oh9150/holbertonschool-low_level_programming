#include "main.h"

/**
 * print_to_98 - check description
 * @n: the number to print from
 *
 * Description: prints all whole numbers between n
 * and 98.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= 100)
				_putchar('0' + (i - (i % 100))/100);
			if (i >= 10)
				_putchar('0' + (i - (i % 10))/10);
			_putchar('0' + (i - (i % 10)));
		}
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{           
			if (i >= 100)
				_putchar('0' + (i - (i % 100))/100);
			if (i >= 10)
				_putchar('0' + (i - (i % 10))/10);
			_putchar('0' + (i - (i % 10)));
		}
	} else
		_putchar("98")
	printf("\n");
}
