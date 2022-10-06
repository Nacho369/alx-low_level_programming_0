#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using
 * malloc
 *
 * @nmemb: Number of elements of array
 *
 * @size: Size of array
 *
 * Return: Pointer to allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array_ptr;
	char *arr;

	/*Check if arguments are null */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocates memory space for array */
	array_ptr = malloc(nmemb * size);

	/* Check if malloc fails */
	if (array_ptr == NULL)
		return (NULL);

	/* Set memory to 0 */

	arr = array_ptr;

	for (i = 0; i < (nmemb * size); i++)
		/**
		 * Can not set array_ptr to 0 cause
		 * it is a null pointer, that is why
		 * I set arr to equal array_ptr.
		 */
		arr[i] = 0;

	return (array_ptr);
}
