#include "main.h"

/**
 * prints_most_numbers - check description
 *
 * Description: prints all digits (0-9) except 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2') || !(i == '4'))
			_putchar(i);
	}
}
