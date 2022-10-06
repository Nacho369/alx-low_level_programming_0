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
	char *ptr;
	unsigned int i, j, len, len1, len2;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	if (len2 > n)
		len2 = n;

	len = len1 + len2;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[k++] = s1[i];

	for (j = 0; j < len2; j++)
		ptr[k++] = s2[j];

	ptr[k] = '\0';

	return (ptr);
}
