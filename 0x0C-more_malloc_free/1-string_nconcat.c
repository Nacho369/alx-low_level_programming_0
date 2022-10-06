#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First String
 *
 * @s2: Secomd String
 *
 * @n: Lenght of s2 to copy.
 *
 * Return: Pointer to the space allocated for
 * new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Initialization of variables */
	unsigned int i, j, k, len = n;
	char *ptr;

	/* Check if s1 or s2 is NULL */
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	/* Get lenght of string */
	for (i = 0; s1[i]; i++)
		len++;

	/* Reserve a space in memory for new string */
	ptr = malloc(sizeof(char) * (len + 1));

	/* Check if malloc fails */
	if (ptr == NULL)
		return (NULL);

	/* Concatenates two strings */
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (k = 0, j = i; s2[k] && k < n; k++, j++)
		ptr[j] = s2[k];

	ptr[len] = '\0';

	return (ptr);
}
