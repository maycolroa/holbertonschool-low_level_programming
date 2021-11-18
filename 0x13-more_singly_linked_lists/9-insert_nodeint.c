#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node at index
  * @head: double pointer
  * @idx: int
  * @n: node
  * Return: NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ndnew, *ndcurrent;
	unsigned int j;

	ndcurrent = *head;

	for (j = 0; ndcurrent && j < idx - 1; j++)
	{
		ndcurrent = ndcurrent->next;
	}

	ndnew = malloc(sizeof(listint_t));
	if (ndnew != NULL)
	{
		ndnew->n = n;
		if (idx == 0)
		{
			ndnew->next = *head;
			*head = ndnew;
			return (ndnew);
		}
		if (j + 1 == idx)
		{
			ndnew->next = ndcurrent->next;
			ndcurrent->next = ndnew;
			return (ndnew);
		}
	}
	free(ndnew);
	return (NULL);
}
