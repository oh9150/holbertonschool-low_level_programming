#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a string containing the types of each parameter, (one letter for
 * each: c for char, i for int, , f for float, and s for string (char *))
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *types = "cifs";
	va_list args;
	char *str;
	int len = sizeof(format);

	va_start(args, len);
	while (*format && *(format + i))
	{
		while (*(types + j) == *(format + i))
		{
			if (i < len - 1)
			{
				printf(", ");
				break;
			} j++;
		} j = 0;
		switch(types[i])
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
	printf("\n");
	va_end(args);
}
