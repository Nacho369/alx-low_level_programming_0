#include "main.h"

/**
 * _strcmp - Compares to string to see if they are equal
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0, if the s1 and s2 are equal; 
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		diff = *s1 - *s2;
	}
	return (diff);
}
