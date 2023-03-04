#include "main.h"

/**
 * cap_string - check description
 * @s: the string to capitalize
 *
 * Description: Capitalizes all words in s
 *
 * Return: The capitalized string.
 */
char *string_toupper(char *s)
{
	int i = 0;
	int j;
	bool afterseparator = true;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a' && afterseparator == true)
			s[i] = s[i] + 32;
		i++;
		afterseparator = false;
		for (j = 0; j < 13; j++)
		{
			if (separators[j] = i)
			{
				afterseparator = true;
				
				break;
			}
		}
	}

	return (s);
}
