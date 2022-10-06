#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using
 * malloc
 *
 * @nmemb - Number of elements of array
 *
 * @size: Size of array
 *
 * Return: Pointer to allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_ptr = malloc(sizeof())
}
