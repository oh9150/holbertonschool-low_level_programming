#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - takes the operator as input and choses the required function
 * @s: the operator
 *
 * Return: a pointer to the required function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5 && *(s + 1) == '\0')
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
