#include "main.h"

/**
 * _puts - check description
 * @str: the string to print
 *
 * Description: prints the string str.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
