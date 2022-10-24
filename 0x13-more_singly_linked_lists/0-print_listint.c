#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: Pointer to the first element of the list
 *
 * Return: Number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}

	return (nodes);
}
