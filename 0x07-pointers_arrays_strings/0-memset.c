#include "main.h"
/**
 *_memset - print array
 * @s: Array 1
 * @b: array 2
 * @n: int
 *Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
