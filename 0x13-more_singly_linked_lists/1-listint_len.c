#include "lists.h"
/**
  * listint_len - print list
  * @h: pointer
  * Return: nodes
  */
size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
h = h->next;
return (i);
}
