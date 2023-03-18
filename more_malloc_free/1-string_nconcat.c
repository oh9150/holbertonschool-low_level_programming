#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check description
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the ammount of characters to concatenate from [s2]
 *
 * Description: concatenates the first [n] bytes from the
 * string [s2] to the string [s1] and allocates the string
 * into a new space in memory
 *
 * Return: the new space in memory; or if malloc fails, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0;
	char *new_str;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 == "";
	while (*s2)
		i++;
	if (n > i)
		n = i;
	i = 0;
	new_str = malloc(sizeof(s1) + n);
	if (new_str == NULL)
		return (NULL);
	while (*s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}

