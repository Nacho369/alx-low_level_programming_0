#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a
 * listint_t list.
 *
 * @head: Pointer to the first element of the list
 * @n: Integer value to add to the list:
 *
 * Return: Address of new element or NULL if it fails
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int node;
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		for (node = 0; ptr->next != NULL; node++)
			ptr = ptr->next;

		if (ptr->next == NULL)
			ptr->next = new;
	}

	return (new);
}
