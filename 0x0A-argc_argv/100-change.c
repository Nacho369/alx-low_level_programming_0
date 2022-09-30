#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cent, amount, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	coin = 0;

	while (amount > 0)
	{
		if (amount >= 25)
			cent = 25;
		else if (amount >= 10)
			cent = 10;
		else if (amount >= 5)
			cent = 5;
		else if (amount >= 2)
			cent = 2;
		else
			cent = 1;

		coin += amount / cent;
		amount %= cent;
	}

	printf("%d\n", coin);

	return (0);
}
