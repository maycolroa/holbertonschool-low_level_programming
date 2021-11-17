#ifndef _LIST_H_
#define _LIST_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: points to the node
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif /*_LIST_H_*/
