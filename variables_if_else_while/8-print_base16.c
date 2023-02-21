#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all the numbers of base 16 in lowercase,
 * followed by a newline.
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0x0; i <= 0xf; i++)
		putchar('0' + i);
	return (0);
}
