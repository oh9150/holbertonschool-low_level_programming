#include "main.h"

/**
 * _isalpha - Check description
 * @c: the value to check.
 *
 * Description: Checks whether a character is a letter.
 *
 * Return: 1 if letter, 0 otherwise.
 */
int _isalpha(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			return (1);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
			return (1);
	}
	return (0);
}
