#include "lists.h"

/**
 * listint_len - returns the number of
 * elements in a linked listint_t
 *
 * @h: head
 *
 * Return: number of elements on listint_t
 */

size_t listint_len(const listint_t *h)
{
	int nb;

	if (h == NULL)
		return (0);
	for (nb = 1; h->next != NULL; nb++)
		h = h->next;
	return (nb);
}

