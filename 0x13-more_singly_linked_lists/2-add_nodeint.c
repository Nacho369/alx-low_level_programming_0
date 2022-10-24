#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a
 * listint_t list.
 *
 * @head: Pointer to the first element of the list
 * @n: Integer value to add to the list:
 *
 * Return: Address of new element or NULL if it fails
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;


	ptr->next = *head;
	*head = ptr;

	return (*head);
}
