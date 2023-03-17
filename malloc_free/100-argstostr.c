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

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[len] =  av[i][j];
			len++;
		}
		new_str[len] = '\n';
		len++;
	}
	new_str[len] = '\0';

	return (new_str);
}
