#include "lists.h"

/**
 * print_list - prints all the elements
 * of a list_t
 *
 * @h: pointer to a list head
 *
 * Return: number of nodes or [0] (nil)
 * if str is NULL.
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes;

	if (h == NULL)
		return (0);

	for (numnodes = 0; h != NULL; numnodes++)
	{
		printf("%i\n", h->n);

		h = h->next;

	}


	return (numnodes);
}

