#include "main.h"

/**
 * print_numbers - check description
 *
 * Description: prints the numbers 0-9 followed by a newline
 * using putchar twice.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
