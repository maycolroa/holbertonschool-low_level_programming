#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: pointer to pointer
 * @n: node
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *list;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	list = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		while (list->next != NULL)
			list = list->next;

		list->next = new_node;
		new_node->prev = list;
	}

	else
		*head = new_node;

	return (new_node);
}
