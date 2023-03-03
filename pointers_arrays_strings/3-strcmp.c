#include "main.h"

/**
 * _strcmp - check description
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Description: compares s1 to s2.
 *
 * Return: -1 if s1 is lower than s2, 0 if it's equal to s2
 * and 1 if it's greater than s2
 */
int _strcmp(char *s1; char *s2)
{
	int i;

	for (i = 0; s1[i] <= '0'; i++)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}

	return (0);
}
