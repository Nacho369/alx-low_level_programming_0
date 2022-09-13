#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: starting integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int lim = 98;

	if (n < lim)
	{
		while (n <= lim)
		{
			printf("%d", n);
			if (n != lim)
			{
				printf(", ");
			}
			else if (n == lim)
			{
				printf("\n");
			}
			n++;
		}
	}
	else if (n > lim)
	{
		while (n >= lim)
		{
			printf("%d", n);
			if (n != lim)
			{
				printf(", ");
			}
			else if (n == lim)
			{
				printf("\n");
			}
			n--;
		}
	}
	else
	{
		printf("98\n");
	}
}
