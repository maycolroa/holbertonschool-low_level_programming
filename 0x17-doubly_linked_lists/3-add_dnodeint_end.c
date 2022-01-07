#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: pointer to pointer
 * @n: node
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
		{
			new->prev = current;
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
