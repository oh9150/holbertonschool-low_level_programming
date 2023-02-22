#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *  * print_alphabet - prints the alphabet using
 *   * the function _printchar
 *    *
 *     * Return: always 0
 *      */
void print_alphabet(void)
{
	        char c;

		        for (c = 'a'; c <= 'z'; c++)
				                _putchar(c);
			        _putchar('\n');
}
