#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * the node at index index of a
 * listint_t linked list.
 *
 * @head:A pointer to the head of
 * the listint_t list
 *
 * @index: index of the node that shoud
 * be deletes. Index starts at 0.
 *
 * Return: 1 if success or -1 if fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}

	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);
	return (1);
}


