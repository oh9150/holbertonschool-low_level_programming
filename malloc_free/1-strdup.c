#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check description
 * @str: the string to copy
 *
 * Description: allocates memory and copies the string [str]
 * into that memory
 *
 * Return: a pointer to the duplicated string, or null if string
 * is null, or null if memory was insufficient.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*str)
		len++;

	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (len >= 0)
	{
		s[len] = *str;
		*str++;
		len--;
	}
	return (s);
}
