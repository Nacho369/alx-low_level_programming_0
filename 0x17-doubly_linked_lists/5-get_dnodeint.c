#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a
 * dlistint_t linked list.
 *
 * @head: Pointer to first element in the list
 * @index: Index of the node, starting from 0
 *
 * Return: NULL if node does not exist, else nth node of a
 * dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	dlistint_t *node_val;
	unsigned int node;

	if (head == NULL)
		return (NULL);

	for (node = 0; ptr->next != NULL; node++)
	{
		if (node == index)
		{
			node_val = ptr;
			return (node_val);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
