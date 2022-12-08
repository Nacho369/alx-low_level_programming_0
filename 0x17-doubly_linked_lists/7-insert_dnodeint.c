#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given
 * position.
 *
 * @h: Pointer to the address of list to insert into.
 * @idx: Index of the list where the new node should be
 * added. Index starts at 0
 * @n: Element to add to the list.
 *
 * Return:  the address of the new node, or NULL if
 * it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int node;

	if (h == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	for (node = 0; ptr != NULL || node + 1 == idx; node++)
	{
		if (node + 1 == idx)
		{
			if (ptr->next != NULL)
				ptr->next->prev = new_node;

			new_node->next = ptr->next;
			ptr->next = new_node;
			new_node->prev = ptr;

			return (new_node);
		}

		ptr = ptr->next;
	}
	free(new_node);
	return (NULL);
}
