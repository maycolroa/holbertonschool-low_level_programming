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
int i, j;
i = 0;
j = 0;
while(dest[j] != '\0')
{
j++;
}		;
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++;
}
return (dest);
}

