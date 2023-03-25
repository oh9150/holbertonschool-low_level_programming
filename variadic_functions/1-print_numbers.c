#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers
 * @separator: the string that separates each number
 * @n: the ammount of numbers passed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (sep == NULL)
		char *sep = ""

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("\s", *sep);
	}
	printf("\n");
