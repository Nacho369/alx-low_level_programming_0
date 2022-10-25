#include "lists.h"

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
