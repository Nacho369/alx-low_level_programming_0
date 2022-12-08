#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a
 * linked dlistint_t list.
 *
 * @h: Pointer to the first element in the list
 *
 * Return: Number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t elem_num = 0;

	if (h == NULL)
		return (0);

	while (ptr)
	{
		elem_num++;
		ptr = ptr->next;
	}

	return (elem_num);
}
