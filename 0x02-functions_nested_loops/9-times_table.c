#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, prod, tens, units;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			tens = prod / 10;
			units = prod % 10;

			if (prod >= 10)
			{
				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			else if (prod < 10)
			{
				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
		}

		_putchar('\n');
	}
}
