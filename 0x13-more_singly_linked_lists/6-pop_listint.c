#include "lists.h"
/**
  * pop_listint - function that deletes the head node of a listin
  * @head: double pointer
  * Return: 0.
  */
int pop_listint(listint_t **head)
{
int j;
listint_t *nbcurrent, *nbnew;
if (head == NULL)
return (0);
nbnew = nbcurrent = *head;
if (*head)
{
j = nbcurrent->n;
*head = nbcurrent->next;
free(nbnew);
}
else
j = 0;
return (j);
}
