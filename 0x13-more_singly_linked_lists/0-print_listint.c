#include "lists.h"
/**
  * print_listint - prints list
  * @h: pointer
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
