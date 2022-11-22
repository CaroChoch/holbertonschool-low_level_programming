#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes
 * the node at index index of a
 * dlistint_t linked list.
 *
 * @head:A pointer to the head of
 * the dlistint_t list
 *
 * @index: index of the node that shoud
 * be deletes. Index starts at 0.
 *
 * Return: 1 if success or -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	index--;

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}

