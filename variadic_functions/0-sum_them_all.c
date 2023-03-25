#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all integers
 * @n: the ammount of paramenters - 1
 *
 * Return: the sum of all integers, or 0 if n == 0
 */
int sum_them_all(const int n, ...)
{
	int sum = 0;
	int i;
	va_list args;
	
	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(ptr);

	return (sum);
}
