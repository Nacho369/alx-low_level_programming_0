#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t
 * linked list.
 *
 * @head: Pointer to the furst element in the list
 *
 * Return: Sum of all the data (n) else return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum_res = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum_res += ptr->n;
		ptr = ptr->next;
	}

	return (sum_res);
}
