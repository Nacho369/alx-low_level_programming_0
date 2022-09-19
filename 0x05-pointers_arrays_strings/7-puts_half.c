#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * @str: String value
 *
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0, max, half;

	while (str[index] != '\0')
	{
		index++;
	}

	max = index;

	if (max % 2 != 0)
		half = (max - 1) / 2;
	else
		half = max / 2;

	while (half <= max)
	{
		_putchar(str[half]);

		half++;
	}
}
