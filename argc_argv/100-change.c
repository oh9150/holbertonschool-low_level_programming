#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the ammount of items in argv
 * @argv: an array containing all of the arguments passed
 * through the compiler
 *
 * Description: prints the lowest ammount of coins needed
 * to make change for an ammounf or money using values of 25, 10,
 * 5, 2 and 1 cent, if not exactly 2 arguments are passed, prints "Error"
 *
 * Return: if the number of arguments passed is different than 2, 1;
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int coin_value = 25;

	if (argc != 2)
	{
		printf("Error");
		return(1);
	}
	argv[1] = atoi(argv[1]);

	while (coin_value != 1)
	{
		if (argv[1] >= coin_value)
		{
			coins = (argv[1] - (argv[1] % coin_value)) / coin_value;
			argv[1] = argv[1] % coin_value;

			if (coin_value == 25)
				coin_value = 10;
			else if (coin_value == 10)
				coin_value = 5;
			else if (coin_value == 5)
				coin_value = 2;
			else
				coin_value = 1;
		}
	}
}
