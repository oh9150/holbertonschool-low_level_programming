#include "main.h"

/**
 * _atoi - check description
 * @s: the str
 *
 * Description: looks for numbers in s and converts
 * them into an integer.
 *
 * Return: the integer.
 */
int _atoi(char *s)
{
	int i;
	int n;

	j = 0;
	n = 0;
	for (i = 0; (s[i] <= '9') && (s[i] >= '0'); i++)
	{}
	for (; !((s[i] <= '9') && (s[i] >= '0'; i++)))
	{
		n = n + (s[i] - '0');
		n = n * 10;
	}
	n = n / 10;
	return (n);
}
