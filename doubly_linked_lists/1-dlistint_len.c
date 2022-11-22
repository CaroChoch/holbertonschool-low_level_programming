#include "lists.h"

/**
 * dlistint_len - returns the number of
 * elements in a linked list_t
 *
 * @h: head
 *
 * Return: number of elements on list_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nb;

	if (h == NULL)
		return (0);
	for (nb = 1; h->next != NULL; nb++)
		h = h->next;
	return (nb);
}

