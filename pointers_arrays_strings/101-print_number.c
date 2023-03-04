#include "main.h"
#include <stdio.h>

/**
 * print_number - check description
 * @n: the number to print
 *
 * Description: prints a number using printchar
 * followed by a newline
 *
 * Return: void
 */
void print_number(int n)
{
	int i = 0;
	int holder;

	while (n > 10)
	{
		holder = n;


		printf("%d", get_digit(1, 0));
		printf("%d", get_digit(1, 1));

	}




}
/**
 * get_digit - gets the digit that's in d's position,
 * counted from 0 and from the right.
 * @n: the number to get the digit from.
 * @d: the digit to get.
 *
 * Return: digit #d from n counted from the right.
 */
int get_digit(int n, int d)

{
	int i = d;
	int mult = 1;

	n = 2;
	for (; i > 0; i--)
	{
		mult = mult * 10;
	}
	return (mult);
}
