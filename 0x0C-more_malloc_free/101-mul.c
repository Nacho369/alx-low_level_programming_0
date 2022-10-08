#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point of program
 *
 * Description: Multiplies two positive numbers
 *
 * @argc: Argument counts
 * @argv: Array of strings passed as args.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	long int num1, num2, res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	res = num1 * num2;
	printf("%lu\n", res);

	return (0);
}
