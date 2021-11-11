#ifndef _LIST_H
#define _LIST_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct list_s - singly linked list
 * @str: string 1
 * @len: string 2
 * @next: points
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /*_LIST_H*/
