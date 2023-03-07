#include "main.h"

/**
 * _pow_recursion - check description
 * @x: the number to be raised
 * @y: the power to raise x
 *
 * Description: raises x to the power of y using recursion.
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1));
}
