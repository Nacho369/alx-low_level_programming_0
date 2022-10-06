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
	unsigned int i, j, k, len;
	unsigned int len1 = 0, len2 = 0;
	char *ptr;

	/* Check if s1 or s2 is NULL */
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	/* Get lenght of string */
	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;

	if (n < len2)
		len2 = n;

	len = len1 + len2;

	/* Reserve a space in memory for new string */
	ptr = malloc(sizeof(char) * (len + 1));

	/* Check if malloc fails */
	if (ptr == NULL)
		return (NULL);

	/* Concatenates two strings */
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0, k = i; j < len2; j++, k++)
		ptr[k] = s2[j];

	ptr[k] = '\0';

	return (ptr);
}
