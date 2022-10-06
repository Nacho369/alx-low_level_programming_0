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
	unsigned int i, j, len;
	unsigned int k = 0, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	/* Get lenght of string */
	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;

	if (n <= len2)
		len2 = n;
	else if (n >= len2)
		n = len2;

	len = len1 + len2;

	/* Reserve a space in memory for new string */
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	/* Concatenates two strings */
	for (i = 0; i < len1; i++)
		ptr[k++] = s1[i];

	for (j = 0; j < len2; j++)
		ptr[k++] = s2[j];

	ptr[k] = '\0';

	return (ptr);
}
