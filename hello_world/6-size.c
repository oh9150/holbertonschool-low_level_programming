#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the size of variable types
 * on the computer it's run on.
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	int i = 1;
	long int l = 1;
	long long int ll = 1;
	float f = 1;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
