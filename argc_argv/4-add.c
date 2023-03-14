#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the ammount of items in argv
 * @argv: an array containing all the items passed through the compiler
 *
 * Descrion: if only numbers are passed as arguments, sums them;
 * if one of the number contains symbols that are not digits, print Error;
 * and if no numbers are passed, prints 0
 *
 * Return: 0 unless one of the number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	argc--;
	for (; argc >= 1; argc--)
	{
		if (atoi(argv[argc])/100 == sizeof(argv[argc]))
			sum += atoi(argv[argc]);
		else
		{
			printf("Error");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
