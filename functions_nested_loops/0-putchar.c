#include <unistd.h>

/**
 * main - prints the text "_putchar"
 * followed by a newline.
 *
 * Return: always 0
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
