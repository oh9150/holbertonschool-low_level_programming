#include <stdio.h>
/**
 * main - entry point
 * @argc: size of argv
 * @argv: an array of the arguments passed by the compiler
 *
 * Description: prints the name of the file, followed
 * by a newline.
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
