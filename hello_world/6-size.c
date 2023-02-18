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
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
	printf("Size of a char: %lu\n byte(s)", sizeof(c));
	printf("Size of a char: %lu\n byte(s)", sizeof(i));
	printf("Size of a char: %lu\n byte(s)", sizeof(l));
	printf("Size of a char: %lu\n byte(s)", sizeof(ll));
	printf("Size of a char: %lu\n byte(s)", sizeof(f));
	return (0);
}
