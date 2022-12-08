#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a
 * dlistint_t list.
 *
 * @head: Pointer to the address of where to add the new node
 * @n: Value to be added.
 *
 * Return: the address of the new element, or NULL if it
 * failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = NULL;

	return (new_node);
}
