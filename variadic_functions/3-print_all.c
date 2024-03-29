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
	int i = 0, j = 0, comma = 0;
	const char types[4] = "cifs", *str;
	va_list args;

	va_start(args, format);
	while (*(format + i) && format)
	{
		j = 0;
		while (*(types + j))
		{
			if (*(format + i) == *(types + j) && comma == 1)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(args, int)), comma = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), comma = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), comma = 1;
				break;
			case 's':
				str = va_arg(args, char *), comma = 1;
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
