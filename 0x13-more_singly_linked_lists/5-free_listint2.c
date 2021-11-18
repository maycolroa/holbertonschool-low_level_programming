#include "lists.h"
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *ndnew, *ndcurrent;

	if (head == NULL)
		return;
	ndcurrent = *head;
	while (ndcurrent != NULL)
	{
		ndnew = ndcurrent;
		ndcurrent = ndcurrent->next;
		free(ndnew);
	}
	*head = NULL;
}
