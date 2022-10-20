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

	if (h == NULL)
		return (0);

	for (node = 0; h != NULL; node++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (node);
}
