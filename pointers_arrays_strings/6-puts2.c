#include "main.h"

/**
 * puts2 - check description
 * @str: the string to print.
 *
 * Description: prints a character every two characters, starting
 * with the first.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
