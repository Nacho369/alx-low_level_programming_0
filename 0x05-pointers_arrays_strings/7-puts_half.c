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
	int index = 0, half;

	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 != 0)
		half = (index + 1) / 2;
	else
		half = index / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);

		half++;
	}

	_putchar('\n');
}
