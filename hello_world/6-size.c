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
	printf("%lu\n",sizeof(c));
	printf("%lu\n",sizeof(i));
	printf("%lu\n",sizeof(l));
	printf("%lu\n",sizeof(ll));
	printf("%lu\n",sizeof(f));
	return (0);
}
