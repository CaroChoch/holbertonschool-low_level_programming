#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a
 * new node at a given position.
 *
 * @head: pointer to a pointer to the
 * the head structure of a linked list.
 * @idx: index of the list where the
 * new node should be added.
 * @n: data
 * Return: address of the new node or
 * NULL if it failled.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new, *tmp;
	
	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			tmp = *head;
			while (tmp)
			{
				if (index == idx)
				{
					new->next = tmp->next;
					tmp->next = new;
					return (new);
				}
				tmp = tmp->next;
				index++;
			}
			if (idx > index)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
