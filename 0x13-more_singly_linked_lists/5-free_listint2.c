#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and set the head to NULL
 *
 * @head: Pointer to the first element of the list
 *
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *aux =  NULL;

	if (head == NULL)
		return;

	aux = *head;

	while (aux != NULL)
	{
		temp = aux->next;
		free(aux);
		aux = temp;
	}

	*head = NULL;
}
