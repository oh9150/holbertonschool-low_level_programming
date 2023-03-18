#include "main.h"
#include <stdlib.h>

/**
 * malolc_checked - asigns memory using malloc; if it
 * fails, causes normal process termination with status value of 98
 *
 * Return: pointer to the new memory or process termination
 */
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);
	if (mem)
		return (mem);
	exit (98);
}
