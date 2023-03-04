#include "main.h"

/**
 * _memset - check description
 * @s: the area to fill up
 * @b: the character to fill up the area with
 * @n: the ammount of characters to fill up with b
 *
 * Description: fills n bytes with b from s.
 *
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int *mem = s;
	int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++
	}
	return (mem);
}
