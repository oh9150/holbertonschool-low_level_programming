#include <stdio.h>

/**
 * main - entry point
 * @argc: the ammount of items in argv
 * @argv: an array containing all the arguments passed through
 * the compiler
 *
 * Description: prints all of the arguments passed, each one followed by
 * a newline.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
