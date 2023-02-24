#include "main.h"

/**
 * print_sign - check description
 * @n: The value to check
 *
 * Description: Prints "+" if the sign of the input
 * is positive, "0" if it's 0 and "-" if it's negative.
 *
 * Returns: 1 if n is greater than zero, 0 if it's equal to 0
 * and -1 if it's lower than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
