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
	int total_value;

	if (argc != 2)
	{
		printf("Error");
		return(1);
	}
	total_value = atoi(argv[1]);
	if (total_value < 0)
	{
		printf("0");
		return (0);
	}

	while (coin_value != 1)
	{
		if (total_value >= coin_value)
		{
			coins = coins += (total_value - (total_value % coin_value)) / coin_value;
			total_value = total_value % coin_value;
		}
		if (coin_value == 25)
			coin_value = 10;
		else if (coin_value == 10)
			coin_value = 5;
		else if (coin_value == 5)
			coin_value = 2;
		else
			coin_value = 1;
	}
	printf("%d\n", coins);
	return (0);
}
