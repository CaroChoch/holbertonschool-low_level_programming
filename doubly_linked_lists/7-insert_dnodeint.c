#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 * list at a given position.
 *
 * @h: pointer to the head of the dlistint_t list.
 * index of the list where the
 * new node should be added.
 * @n: The integer for the new node to contain.
 * @idx: index of the new node
 *
 * Return: address of the new node or
 * NULL if it failled
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	idx--;

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
