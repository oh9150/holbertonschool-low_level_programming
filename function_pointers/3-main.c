#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the ammount of arguments
 * @argv: an array of arguments passed by the compiler
 *
 * Description: atois the integers passed and calls get_op_func and prints the
 * result
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*function)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error argc");
		exit(98);
	}
	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error wrong op");
		exit(99);
	}

	result = function(atoi(argv[1]), atoi(argv[3]));
	printf("%d", result);

	return (0);
}
