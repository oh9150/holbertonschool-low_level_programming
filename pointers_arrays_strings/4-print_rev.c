#include "main.h"

/**
 * print_rev - check description
 * @s: the string to print in reverse
 *
 * Description: prints the string s in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar('0' + i);
/**	for (;s >= 0; i--)
*		_putchar(s[i]);
*/}
