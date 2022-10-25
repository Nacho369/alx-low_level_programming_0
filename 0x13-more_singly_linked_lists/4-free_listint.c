#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 *
 * @head: Pointer to the first element of the list
 *
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *aux =  NULL;

	aux = head;

	while (aux != NULL)
	{
		temp = aux->next;
		free(aux);
		aux = temp;
	}

	head = NULL;
}
