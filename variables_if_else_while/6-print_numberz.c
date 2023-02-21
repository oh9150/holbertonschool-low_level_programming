#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digit numbers of base
 * 10 starting from 0, followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + 48);
	putchar('\n');
	return (0);
}
