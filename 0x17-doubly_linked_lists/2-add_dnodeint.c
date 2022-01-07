#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: pointer to a pointer
 * @n: node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;

	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
