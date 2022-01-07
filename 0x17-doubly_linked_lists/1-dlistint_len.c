#include "lists.h"

/**
 * dlistint_len - Returns the number
 * @h: pointer
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
