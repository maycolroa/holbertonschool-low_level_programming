#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end
  * @head: position list
  * @n: int
  * Return:  the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ndnew, *ndcurrent;

	ndnew = malloc(sizeof(listint_t));
	if (ndnew == NULL)
		return (NULL);
	ndnew->n = n;
	ndnew->next = NULL;

	if (*head == NULL)
	{
		*head = ndnew;
		return (*head);
	}
	ndcurrent = *head;
	while (ndcurrent->next != NULL)
		ndcurrent = ndcurrent->next;
	ndcurrent->next = ndnew;
	return (*head);
}
