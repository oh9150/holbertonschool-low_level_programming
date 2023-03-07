#include "main.h"

/**
 * _puts_recursion - check description
 * @s: the string to print
 *
 * Description: prints a string, followed by a newline
 * using recursion.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
