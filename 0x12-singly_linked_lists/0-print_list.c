#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: Pointer to first list
 *
 * Return: Number  of nodes
 */
size_t print_list(const list_t *h)
{
	int node;
	char  *str = h->str;
	unsigned int len = h->len;

	for (node = 0; h != NULL; node++)
	{

		if (h->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
			h = h->next;
			node++;
		}

		str = h->str;
		len = h->len;

		for (len = 0; str[len]; len++)
			;

		printf("[%d] %s\n", len, str);

		h = h->next;
	}

	return (node);
}
