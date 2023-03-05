#include "main.h"

/**
 * _memcpy - check description
 * @dest: the area to copy to
 * @src: the area to copy from
 * @n: the ammount of bytes to copy
 *
 * Description: copies n ammount of bytes from the memory
 * area src to the memory area dest.
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	while (n--)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
