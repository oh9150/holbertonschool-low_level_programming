#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - check description
 *
 * Description: prints the numbers from 1 to 100, followed by a newline,
 * but for multiples of three print Fizz instead of the number and for
 * the multiples of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for(i = 1; i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (!(i == 100))
			printf(" ");
	}
}
