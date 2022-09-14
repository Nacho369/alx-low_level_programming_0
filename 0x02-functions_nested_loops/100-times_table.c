#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, col, prod, hunds, tens, units;

	if (n > 0 || n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				hunds = prod / 100;
				tens = (prod / 10) % 10;
				units = prod % 10;

				if (prod < 10)
				{
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(prod + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				else if (prod >= 100 && prod < 1000)
				{
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(hunds + '0');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
			}

			_putchar('\n');
		}
	}
}
