#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: strng to concatenate
 * @s2: string to concatenate
 * @n: number of bytes of @s2
 *
 * Return: pointer to concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len, i, j, p, m;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;

	if (j > n)
		j = n;

	len = i + j;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		ptr[k++] = s1[p];
	for (m = 0; m < j; m++)
		ptr[k++] = s2[m];

	ptr[k] = '\0';
	return (ptr);
}
