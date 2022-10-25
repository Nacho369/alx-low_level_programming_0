#include "lists.h"

/**
 * pop_listint - delete the head node and update the linked list
 *
 * @head: first element of the list
 *
 * Return: Head node data.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr = NULL;

	if (*head == NULL)
		return (0);

	ptr = *head;
	i = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (i);
}
