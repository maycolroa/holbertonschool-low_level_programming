#include "main.h"
/**
 *_strcpy - print array
 * @dest: Array 1
 * @src: array 2
 *Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
}
dest[i] = '\0';
return (dest);
}
