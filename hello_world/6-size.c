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
	printf("Size of a char:" sizeof (c));
	printf("Size of a int:" sizeof (i));
	printf("Size of a long int:" sizeof (l));
	printf("Size of a long long int:" sizeof (ll));
	printf("Size of a float:" sizeof (f));
}
