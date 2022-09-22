#include "main.h"

/**
 * rot13 - Encode string using rot13 encryption
 *
 * @s: String to encode
 *
 * Return: pointet to string to be encoded.
 */
char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}

	return (p);
}
