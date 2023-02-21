#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase except letters
 * q and e, followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if !(c == 'q' || c == 'e')
			putchar(c);
	}
	return (0);
}		
