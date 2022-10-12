#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Searchs for an integer
 *
 * @ac: number of arguments
 * @av: array with arguments
 *
 * Return: no return
 */
int main(int ac, char *av[])
{
	int num1, num2, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2][0] != '+' && av[2][0] != '-' &&
	av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (av[2][1] == '\0')
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		res = (*get_op_func(av[2]))(num1, num2);
		printf("%d\n", res);

	} else
	{

		printf("Error\n");
		exit(99);
	}
	return (0);

}
