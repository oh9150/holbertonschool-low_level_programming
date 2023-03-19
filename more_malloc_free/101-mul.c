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
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
