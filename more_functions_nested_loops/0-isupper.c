#include "main.h"

/**
 * _isupper - check description
 *
 * Description: checks c and determines if it's an
 * uppercase letter.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
