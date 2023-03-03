#include "main.h"

/**
 * _strcat - check description
 * @dest: the string that src will append to
 * @src: the string that will append to dest
 *
 * Description: appends src to dest, so that the text in src
 * is before the one in dest.
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{}
	i--;
	for (j = i; dest[j - i] != '\0'; j++)
		src[j] = dest[j - i];
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (*dest);
}

