#include "lists.h"

/**
 * sum_listint - returns the sum of all
 * data (n) of a listint_t linked list.
 *
 * @head: pointer to a pointer to the
 * the head structure of a linked list.
 *
 * Return: sum of all the data of a
 * linked list or 0 if the list is
 * empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


