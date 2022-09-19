#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: String value
 *
 * Return: void
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}

	rev--;

	while (rev >= 0)
	{
		_putchar(s[rev]);

		rev--;
	}

	_putchar('\n');
}
