#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: list head
 * @n: value of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
