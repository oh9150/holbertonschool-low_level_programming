#include "main.h"

/**
 * factorial - check description
 * @n: the number to factorialize??
 *
 * Description: gets the factorial of n
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
		
	return (n * factorial(n - 1));
}
