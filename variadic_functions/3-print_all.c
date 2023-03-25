#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: a string containing the types of each parameter, (one letter for
 * each: c for char, i for int, , f for float, and s for string (char *))
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, len = strlen(format);
	const char *types = "cifs", *str;
	va_list args;

	printf("%d", len);
	va_start(args, format);
	while (*(format + i))
	{
		while (*(types + j) == *(format + i) || !(*(types + j)))
		{
			if (i < len - 1)
			{
				printf(", ");
				break;
			} j++;
		} j = 0;
		switch (*(types + j))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
