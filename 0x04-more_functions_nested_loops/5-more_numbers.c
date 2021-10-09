#include "main.h"
#include <stdio.h>

/**
  * more_numbers - print 0 - 14
  *
  *
  * Return: 0
  */

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j / 10 != 0)
{
putchar('0' + j / 10);
}
putchar('0' + j % 10);
}
putchar('\n');
}
}