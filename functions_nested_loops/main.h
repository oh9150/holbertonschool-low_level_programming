#include "0-putchar.c"

int _putchar(char c)
{
	return (write(1, c, 1));
}
