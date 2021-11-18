#include "lists.h"
/**
  * sum_listint - function that returns the sum of all the data
  * @head: pointer
  *
  * Return: 0.
  */
int sum_listint(listint_t *head)
{
	int oper = 0;

	for (; head != NULL;)
	{
		if (head == NULL)
		return (0);
		oper = oper + head->n;
		head = head->next;
	}
	return (oper);
}
