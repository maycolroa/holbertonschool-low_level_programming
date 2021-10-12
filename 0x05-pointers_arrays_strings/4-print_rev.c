#include "main.h"
#include <stdio.h>
/**
 *print_rev - print array
 *@s: pointer
 *Return: 0.
 */
void print_rev(char *s)
{
int i;
for (i = 0; *s != '\0'; i++)
s++;
s--;
for (i = i; i != 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
