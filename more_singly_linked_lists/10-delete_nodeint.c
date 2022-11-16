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
	listint_t *tmp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
