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
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	return (0);
}
