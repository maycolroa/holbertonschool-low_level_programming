#include "main.h"
/**
 *_strchr - function that locates a character in a string.
 * @c: Array 1
 * @s: array 2
 *
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}
