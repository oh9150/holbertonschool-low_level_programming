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
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
	printf(sizeof (c),sizeof (i),sizeof (l),sizeof (ll),sizeof (f));
