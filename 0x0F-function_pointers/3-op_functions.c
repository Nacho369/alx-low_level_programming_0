#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Add two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: An interger
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subract b from a
 *
 * @a: First number
 * @b: Second number
 *
 * Return: An interger
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: An integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: An integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Gets the remainder between @a and @b
 *
 * @a: First number
 * @b: Second number
 *
 * Return: An integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
