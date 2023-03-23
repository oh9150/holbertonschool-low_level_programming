#include "main.h"
#include <stdio.h>

/**
 * print_name - prints [name]
 * @name: the string to print
 * @f: a pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%d", *name);
}
