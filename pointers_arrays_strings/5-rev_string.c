#include "main.h"

/**
 * rev_string - check description
 * @s: the string to reverse.
 *
 * Description: reverses the string s.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char copy[500];

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{}
	for (i = 0; s[i] != '\0'; i++)
		copy[i] = s[i];
	i--;
	for (; i >= 0; i--)
	{
		s[i] = copy[j];
		j++;
	}
}
