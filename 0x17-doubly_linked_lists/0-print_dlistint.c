#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a
 * dlistint_t list.
 *
 * @h: Pointer to head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes;

	if (h == NULL)
		return (0);

	for (nodes = 0; ptr != NULL; nodes++)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;
	}

	return (nodes);
}
