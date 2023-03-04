#include "main.h"

/**
 * string_toupper - check description
 * @s: the string to uppercase.
 *
 * Description: uppercases all letters in s.
 *
 * Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] + 32;
	}

	return (s);
}
