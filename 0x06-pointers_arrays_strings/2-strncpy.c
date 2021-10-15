#include "main.h"
/**
 *_strncpy copies a string.
 * @dest: Array 1
 * @src: array 2
 *Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for (; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
