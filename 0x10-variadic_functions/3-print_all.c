#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void t_char(va_list arg_param);
void t_int(va_list arg_param);
void t_float(va_list arg_param);
void t_str(va_list arg_param);

/**
 * print_all - Prints anything
 *
 * @format: list of types of arguments passed to
 * the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args_param;
	char *sep = "";

	args_t types[] = {
		{'c', t_char},
		{'i', t_int},
		{'f', t_float},
		{'s', t_str}
	};

	va_start(args_param, format);

	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == types[j].dt)
			{
				printf("%s", sep);
				types[j].d_type(args_param);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args_param);
}

/**
 * t_char - Prints a character
 *
 * @arg_param: Character
 *
 * Return: void
 */
void t_char(va_list arg_param)
{
	int c;

	c = va_arg(arg_param, int);
	printf("%c", c);
}

/**
 * t_int - Prints an integer
 *
 * @arg_param: Character
 *
 * Return: void
 */
void t_int(va_list arg_param)
{
	int i;

	i = va_arg(arg_param, int);
	printf("%d", i);
}

/**
 * t_float - Prints a float
 *
 * @arg_param: Character
 *
 * Return: void
 */
void t_float(va_list arg_param)
{
	double f;

	f = va_arg(arg_param, double);
	printf("%f", f);
}

/**
 * t_str - Prints a string
 *
 * @arg_param: Character
 *
 * Return: void
 */
void t_str(va_list arg_param)
{
	char *str = va_arg(arg_param, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
