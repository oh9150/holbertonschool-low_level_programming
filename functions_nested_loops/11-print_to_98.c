#include "main.h"

/**
 * print_to_98 - check description
 * @n: the number to print from
 *
 * Description: prints all whole numbers between n
 * and 98.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			write(1, &i", ", sizeof(i) + 2);
		}
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			write(1, &n", ", sizeof(i) + 2);
		}
	} else
		write(1, "98", 2);
}
