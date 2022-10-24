#include "lists.h"

/**
 * listint_len - Returns number of element in a linked list
 *
 * @h: Pointer to the first element of the list
 *
 * Return: Number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
