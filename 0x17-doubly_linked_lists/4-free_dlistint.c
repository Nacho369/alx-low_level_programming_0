#include "lists.h"

/**
 * free_dlistint - Frees a dlistint list
 *
 * @head: Pointer to the list to be frees
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
