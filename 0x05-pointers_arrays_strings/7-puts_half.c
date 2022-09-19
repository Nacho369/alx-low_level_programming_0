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
	int index = 0, half, i;

	while (str[index] != '\0')
	{
		index++;
	}

	if (max % 2 != 0)
		half = (index - 1) / 2;
	else
		half = index / 2;

	i = half + 1;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		half++;
	}

	_putchar('\n');
}
