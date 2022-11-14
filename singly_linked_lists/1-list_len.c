#include "lists.h"

/**
 * list_len - returs the number of
 * elements in a linked list_t
 *
 * @h: head
 *
 * Return: number of elements on list_t
 */

size_t list_len(const list_t *h)
{
	int nb;

	if (h == NULL)
		return (0);
	for (nb = 1; h->next != NULL; nb++)
		h = h->next;
	return (nb);
}

