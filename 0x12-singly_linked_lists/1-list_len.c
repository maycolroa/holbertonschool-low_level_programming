#include "lists.h"
/**
 *list_len -  prints all the elements
 *@h: pointer nodes
 *Return: nodes
 */

size_t list_len(const list_t *h)
{
int i;
for (i = 0; h != NULL; i++)
{
h = (*h).next;
}
return (i);
}
