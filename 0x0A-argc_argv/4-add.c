#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Print the sum of positive numbers
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
	int i, result = 0, nums;

	for (i = 1; i < argc; i++)
	{
		for (nums = 0; argv[i][nums]; nums++)
		{
			if (argv[i][nums] < '0' || argv[i][nums] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
