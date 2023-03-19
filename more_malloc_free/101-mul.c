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
       	long long long long int result, num1, num2;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}