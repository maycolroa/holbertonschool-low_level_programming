#include "main.h"

/**
  * print_most_numbers - print 0 - 9 ! 2 -4
  *
  *
  * Return: 0
  */

void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
putchar(i);
}
putchar('\n');
}
