#include "main.h"
#include <stdio.h>

/**
  * print_line - print_
  *@n: int
  *
  * Return: 0
  */
void print_line(int n)
{
int i;
if (n < 1)
{
putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
}
