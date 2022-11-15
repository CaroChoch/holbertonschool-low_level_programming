#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of a linked listint_t list.
 * @head: pointer to the address of the
 * head of the listint_t linked list.
 *
 * Return: If the linked list is empty - 0.
 * Otherwise - The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head != NULL || *head != NULL)

	tmp = *head;
	num = (*head)->n;
	*head = tmp->next;

	free(tmp);

	return (num);
}
