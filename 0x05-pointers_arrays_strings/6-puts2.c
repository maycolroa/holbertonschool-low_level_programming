#include "main.h"
/**
 *puts2 - print 0 2 4 6 8
 *@str: pointer
 *Return: 0.
 */
void puts2(char *str)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i % 2 == 0)
putchar(str[i]);
}
putchar('\n');
}
