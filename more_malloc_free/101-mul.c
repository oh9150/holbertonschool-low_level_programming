#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: the ammount of arguments
 * @argv: the content of the arguments
 *
 * Description: multiplies two numbers and prints the result
 *
 * Return: void
 */
void main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		printf("%d", argc);
		exit(98);
	}
	printf("%d\n", argv[1] * argv[2]);
}
