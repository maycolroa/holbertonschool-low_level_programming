#include "lists.h"
/**
  * add_nodeint -  adds a new node
  * @n: int
  * @head: position list
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ndnew;

	ndnew = *head;
	ndnew = malloc(sizeof(listint_t));
	if (ndnew == NULL)
		return (NULL);
	ndnew ->n = n;
	ndnew ->next = *head;
	*head = ndnew;
	return (*head);
}
