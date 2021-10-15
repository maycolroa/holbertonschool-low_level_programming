#include "main.h"
/**
 *_strncat - print array holberton
 * @dest: Array 1
 * @src: array 2
 * @n: int array
 *Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
for (i = 0; dest[i] != '\0'; i++)
for (k = 0; src[k] != '\0'; k++)
if (n > k)
{
n = k;
}
for (j = 0; j < n;)
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
