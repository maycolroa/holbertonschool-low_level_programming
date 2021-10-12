#include "main.h"
#include <stdio.h>
/**
 *rev_string - print my school
 *@s: pointer
 *Return: 0.
 */
void rev_string(char *s)
{
int i, j;
char k[1000];
for (i = 0; *s != '\0'; i++)
{
k[i] = *s;
s++;
}
s--;
for (j = 0; j != i; j++)
{
*s = k[j];
s--;
}
s++;
}
