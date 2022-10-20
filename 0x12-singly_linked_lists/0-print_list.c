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
	size_t node;
	char  *str = h->str;
	unsigned int len = h->len;

	if (h == NULL)
		return (0);

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

		printf("[%d] %s\n", len, str);

		h = h->next;
	}

	return (node);
}
