/**
 * print_alphabet - prints the alphabet using 
 * the function _printchar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	putchar('\n');
	return (0);
}

