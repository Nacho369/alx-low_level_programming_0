#include "main.h"

/**
 * i_equals_to_one_or_zero - Code for i equal to 1 or 0
 *
 * @i: integer from jack_bauer function
 *
 * Return: void
 */
void i_equals_to_one_or_zero(int i);

void i_equals_to_two(int i);

/**
 * jack_bauer - Prints everyy minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = '0'; i <= '2'; i++)
	{
		if (i == '1' || i == '0')
		{
			i_equals_to_one_or_zero(i);
		}
		else if (i == '2')
		{
			i_equals_to_two(i);
		}
	}
}

/**
 * i_equals_to_one_or_zero - Code for i equal to 1 or 0
 *
 * @i: integer from jack_bauer function
 *
 * Return: void
 */
void i_equals_to_one_or_zero(int i)
{
	int j, k, l;

	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '5'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar('\n');
			}
		}
	}
}

/**
 * i_equals_to_two - Code for i equal to two
 *
 * @i: integer from jack_bauer function
 *
 * Return: void
 */
void i_equals_to_two(int i)
{
	int j, k, l;

	for (j = '0'; j <= '3'; j++)
	{
		for (k = '0'; k <= '5'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar('\n');
			}
		}
	}
}
