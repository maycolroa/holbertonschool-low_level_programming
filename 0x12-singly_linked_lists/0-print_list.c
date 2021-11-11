#include "lists.h"
/**
 *print_list -  prints all the elements
 *@h: pointer nodes
 *Return: nodes
 */

size_t print_list(const list_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
if ((*h).str == NULL)
{
printf("[0] (nil)\n");
h = (*h).next;
i++;
}
printf("[%u] %s\n", (*h).len, (*h).str);
h = (*h).next;
}
return (i);
}
