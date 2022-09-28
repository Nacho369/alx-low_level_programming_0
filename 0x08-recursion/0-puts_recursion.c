#include "main.h"

/**
 * _puts_recursion - Prints a new string followed
 * by a new line
 *
 * @s: String to print out
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
