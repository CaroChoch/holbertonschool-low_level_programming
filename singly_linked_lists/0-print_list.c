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

size_t print_list(const list_t *h)
{
	size_t numnodes;

	if (h == NULL)
		return (0);

	for (numnodes = 0; h != NULL; numnodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

	}


	return (numnodes);
}



