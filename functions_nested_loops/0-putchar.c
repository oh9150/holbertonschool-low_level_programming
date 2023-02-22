#include <main.h>
/**
 * main - Entry point
 *
 * prints the text "_putchar" followed by a newline.
 *
 * Return: always 0.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	write(1, '\n', 1);
	return (0);
}
