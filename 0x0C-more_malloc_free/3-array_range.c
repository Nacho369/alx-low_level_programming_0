#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates array of integers
 *
 * @min: Minimum range for array
 * @max: Maximum range for array
 *
 * Return: Pointer to space allocated for array.
 */
int *array_range(int min, int max)
{
	int *arr_ptr;
	int i, j, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	arr_ptr = malloc(sizeof(int) * len);

	if (arr_ptr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		arr_ptr[j] = i;

	return (arr_ptr);
}
