#include "main.h"
/**
 *_strcat - print array
 * @dest: Array 1
 * @src: array 2
 *Return: 0.
 */
char *_strcat(char *dest, char *src)
{
char *j = dest;
int i;
for (i = 0; *dest != '\0'; i++)
{
dest++;
}
for (i = 0; *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (j);
}
