#include "lists.h"

/**
 * add_node - Adds new node at the beginning of the list
 *
 * @head: Pointer to the pointer of the first element
 *
 * @str: String to add
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	*temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	temp->str = strdup("Hello");
	temp->len = len;

	*head = temp;

	return (temp);
}
