#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);


/**
 * struct arguments_type - A new struct type definin
 * a printer.
 *
 * @dt: A symbol representing a data type.
 * @d_type: A function pointer to a function that
 * prints a data type corresponding to symbol.
 */
typedef struct arguments_type
{
	char dt;
	void (*d_type)(va_list arg_param);
} args_t;

#endif
