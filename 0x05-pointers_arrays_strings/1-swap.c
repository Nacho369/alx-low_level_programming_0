#include "main.h"

/**
 * swap_int - Swaps value of 2 integers
 *
 * @a: first integer value
 * @b: second integer value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aa = *a;

	*a = *b;

	*b = aa;
}
