#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase followed by
 * the alphabet in uppercase using the function
 * putchar followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	int c;
	for(c = 'a'; c <= 'z'; c++)
		putchar(c);
	for(c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
