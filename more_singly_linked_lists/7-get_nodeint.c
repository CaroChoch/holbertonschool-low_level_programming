#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth
 * node of a linked list
 * @head: Pointer to a structure
 * @index: Index of the node starting at 0
 *
 * Return: nth node of a linked list
 * Null if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

