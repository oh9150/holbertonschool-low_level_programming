#include "main.h"

/**
 * _islower - Check description
 *
 * Description: Checks whether a character is in lowercase.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(char c)
{
	char ch;

	if(!(typeof(c) == char))
		return (0);
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch == c)
			return (1);
	}
	return (0);
}
