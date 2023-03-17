#include "main.h"
#include <stdlib.h>

/**
 * str_concat - check description
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Description: concatenates [s1] with [s2], if either of them
 * are NULL it's treated as an empty string and stores it into a new space in memory
 *
 * Return: a pointer to the new string, or NULL if not enough memory
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *new_str, *ptr1, *ptr2;
	int i = 0;

	s1 = ptr1;
	s2 = ptr2;
	if (s1)
	{
		while (*s1)
		{
			len++;
			s1++;
		}
	}

	if (s2)
	{
		while (*s2)
		{
			len++;
			s2++;
		}
	}

	len++;
	new_str = (char *)malloc(len * sizeof(char));
	if (!(new_str))
		return (NULL);

	if (s1)
	{
		while(*ptr1)
		{
			new_str[i] = *ptr1;
			i++;
			ptr1++;
		}
	}
	if (s2)
	{
		while (*ptr2)
		{
			new_string[i] = *ptr2;
			i++;
			ptr2++;
		}
	}
	new_string[i] = '\0';

	return (new_str);
}
