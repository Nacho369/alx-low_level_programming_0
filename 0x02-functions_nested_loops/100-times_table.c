#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: integer value to be passed in.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, col, prod;

	if (n > 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				prod = row * col;
				if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((prod / 100) % 10) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}

			_putchar('\n');
		}
	}
	else if(n == 0)
	{
		_putchar('0');
	}
}
