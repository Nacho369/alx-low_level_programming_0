#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: int variable to allocate memory for.
 *
 * Return: void pointer to allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *int_ptr;

	int_ptr = malloc(b);

	if (int_ptr == NULL)
		exit(98);

	return (int_ptr);
}
