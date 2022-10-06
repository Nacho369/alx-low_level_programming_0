#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocate a memory block.
 *
 * @ptr: Pointer to memory previously allocated
 *
 * @old_size: Size in bytes of space allocated
 * to @ptr
 *
 * @new_size: Size in bytes of new memory block
 *
 * Return: @ptr - If new_size == old_size
 * NULL - If new_size == 0 and ptr is not NULL
 * Otherwise - a pointer to the reallocated
 * memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		realloc = malloc(new_size);

		if (realloc == NULL)
			return (NULL);
	}

	if (new_size > old_size && ptr != NULL)
	{
		realloc = malloc(new_size);

		if (realloc == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			realloc[i] = *((char *)ptr + 1);

		free(ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (realloc);
}
