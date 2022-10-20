#include "lists.h"

/**
 * list_len - Return number of elements of the list list_t
 *
 * @h: Pointer to the first element of the list
 *
 * Return: Number of element
 */
size_t list_len(const list_t *h)
{
	size_t node;

	if (h == NULL)
		return (0);

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}

	return (node);
}
