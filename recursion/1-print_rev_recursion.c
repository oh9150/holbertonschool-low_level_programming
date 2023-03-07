#include "main.h"

/**
 * _print_rev_recursion - check description
 * @s: the string to print
 *
 * Description: prints a string in reverse using recursion
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
