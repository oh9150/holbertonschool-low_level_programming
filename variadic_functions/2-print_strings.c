#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a newline
 * @separator: the string to be printed between the strings
 * @n: the ammount of strings to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string != NULL)
		{
			printf("%s", string);
		} else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
