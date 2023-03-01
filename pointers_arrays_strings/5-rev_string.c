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
	int len;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	len = i;
	for (; i >= len / 2; i--)
	{
		*s[i] = s[j];
		j++;
	}
}
