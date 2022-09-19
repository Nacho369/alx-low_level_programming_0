#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array
 *
 * @a: array
 * @n: no of element to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, arr;

	for (i = 0; i < n; i++)
	{
		arr = a[i];

		printf("%d", arr);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
