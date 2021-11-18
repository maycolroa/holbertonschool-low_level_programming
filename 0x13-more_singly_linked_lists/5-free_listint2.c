#include "lists.h"
/**
  * free_listint2 -  function that frees a listint_t list.
  * @head: double pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *ndnew, *ndcurrent;

	if (head == NULL)
		return;
	ndcurrent = *head;
	for (ndcurrent = *head; ndcurrent != NULL;)
	{
		ndnew = ndcurrent;
		ndcurrent = ndcurrent->next;
		free(ndnew);
	}
	*head = NULL;
}
