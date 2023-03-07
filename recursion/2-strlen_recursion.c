#include "main.h"

/**
 * _strlen_recursion - check description
 * @s: the string to check
 *
 * Description: finds the length of s using recursion
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	return (1 + _strlen_recursion(s + 1));
}
