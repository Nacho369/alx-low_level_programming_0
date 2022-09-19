#include "main.h"

/**
 * rev_string - Prints a string in reverse
 *
 * @s: String value
 *
 * Return: void
 */
void rev_string(char *s)
{
	int index = 0, max, half;
	char first, last;

	while (s[index] != '\0')
	{
		index++;
	}

	max = index - 1;
	half = max / 2;

	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
