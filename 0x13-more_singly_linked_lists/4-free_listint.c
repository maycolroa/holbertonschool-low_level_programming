#include "lists.h"

/**
  * free_listint - delete functions
  * @head: position list
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
