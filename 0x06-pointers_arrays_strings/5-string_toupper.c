#include "main.h"

/**
 * string_toupper - Converts lower case string to upper case
 *
 * @str: String value to be converted
 *
 * Return: uppercase value
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		i++;
	}
	return (str);
}
