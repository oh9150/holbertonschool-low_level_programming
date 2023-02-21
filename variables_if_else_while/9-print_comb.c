#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all possible combinations of single-digit
 * numbers separated by a comma followed by a space
 * using the function putchar and no char variables.
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9) 
		{
			putchar(',');
			putchar(' ');
		}
	}
}
