#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds the two integers
 *
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts [b] from [a]
 * @a: the value to subtract to
 * @b: the value to subtract from [a]
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two integers
 * @a: int #1
 * @b: int #2
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides [a] / [b], if b == 0, prints error and exits with code 100
 * @a: an int
 * @b: an int
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - finds [a] % [b], if b == 0, prints error and exits with code 100
 * @a: an int
 * @b: an int
 *
 * Return: the result
 */
 int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
