#include "main.h"

/**
 * puts_half - check description
 * @str: the string to print.
 *
 * Description: prints the second half of the string
 * str.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{}
	if (i % 2 == 1)
		i--;
	i = i / 2;
	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
}
