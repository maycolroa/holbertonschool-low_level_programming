#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif /*_MAIN_H_*/
