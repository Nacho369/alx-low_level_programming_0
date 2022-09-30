#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies to number passed in as
 * arguments
 *
 * @argc: The number of arguments supplied to the
 * program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (Success) if program receives two
 * argument else 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
