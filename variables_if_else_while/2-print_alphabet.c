#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the whole alphabet in one line using
 * the functions putchar
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
