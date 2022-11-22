#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *            of a list.
 * @head: A pointer to the head of a list.
 * @str: The string to be added to the list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}

