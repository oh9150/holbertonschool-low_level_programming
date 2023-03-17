#include "main.h"
#include <stdlib.h>

/**
 * argstostr - check description
 * @ac: the ammount of items in [av]
 * @av: all the arguments to concatenate
 *
 * Description: concatenates all of [av]'s arguments into a new
 * string and separates each of them with a newline in the string
 *
 * Return: a pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *new_str;

	for (i = 0; i < ac; i++)
	{
		while (*av[i])
			len++;
	}
	new_str = (char *)malloc((len + 1) * sizeof(char));
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*av[i])
		{
			new_str[len] =  av[i][j];
			j++;
			len++;
		}
		new_str[len] = '\n';
		len++
	}
	return (new_str);
}
