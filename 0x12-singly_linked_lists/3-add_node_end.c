#include "lists.h"

/**
 * add_node_end - Adds new node at the beginning of the list
 *
 * @head: Pointer to the pointer of the first element
 *
 * @str: String to add
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *temp = NULL;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
