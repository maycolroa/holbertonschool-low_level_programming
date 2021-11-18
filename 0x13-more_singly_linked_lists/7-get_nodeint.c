#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the nth node
  * @head: pointer
  * @index: int
  * Return: NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
		return (NULL);
		head = head->next;
	}
	return (head);
}
