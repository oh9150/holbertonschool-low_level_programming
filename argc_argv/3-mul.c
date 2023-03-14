#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the size of the array argv
 * @argv: an array containing all of the arguments passed
 * by the compiler
 *
 * Description: prints the result of the multiplication of two numbers,
 * if less than 3 arguments are passed, prints "Error"
 *
 * Return: if there are 3 parameters passed, 0; if less than 3, 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
