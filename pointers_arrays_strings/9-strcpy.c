#include "main.h"

/**
 * _strcpy - read description
 * @src: the string to copy from
 * @dest: the string to copy to
 *
 * Description: copies string src into string dest.
 *
 * Return: pointer to dest 
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
