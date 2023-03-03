#include "main.h"

/**
 * _strncpy - check description
 * @dest: the string that src will append to
 * @src: the string that will append to dest
 * @n: the max number of values appended to dest from src
 *
 * Description: appends n characters from src to dest.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = i; src[j - i] != '\0'; j++)
		if (j - i < n)
		{
			dest[j] = src[j - i];
		}
		else
			break;
	if (n > j - i)
	{
		for (; j - n > 0; j++)
			dest[j] = '\0';
	}

	return (dest);
}
