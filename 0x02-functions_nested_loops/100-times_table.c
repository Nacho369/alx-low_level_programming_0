#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, col, prod;

	if (n > 0 || n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;

				if (col == 0)
					_putchar('0');
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod > 99 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}

			_putchar('\n');
		}
	}
}
