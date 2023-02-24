#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet using
 * the function _printchar
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet followed by a
 * newline ten times
 * 
 * Return: void
 */
void print_alphabet_x10(void);

/**
 * _islower - Check description
 *
 * Description: checks if the character is in lowercase.
 *
 * Return: 1 if lowercase, 0 if not.
 */
int _islower(int c);

/**
 * _isalpha - Check description
 * 
 * Description: Checks whether a character is a letter.
 * 
 * Return: 1 if letter, 0 otherwise.
 */
int _isalpha(int c);

/**
 * print_sign - check description
 * @n: The value to check
 *
 * Description: Prints "1" if n is greater than 0,
 * "0" if it's equal to 0 and "-1" if it's lower than 0.
 *
 * Return: 1 if n is greater than 0, 0 if it's equal to 0
 * and -1 if it's lower than 0.
 */
int print_sign(int n);
