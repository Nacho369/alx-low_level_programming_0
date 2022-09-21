#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: array variable
 * @n: Number of element of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = n - 1; i >= n / 2; i--)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
