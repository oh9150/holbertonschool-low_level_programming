#include "main.h"

/**
 * print_last_digit - check description
 * @n: the integer to get its last digit,
 *
 * Description: prints the last digit of n.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
