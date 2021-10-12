#include "main.h"
#include <stdio.h>
/**
 *_strlen - print a b i
 *@s: pointer
 *Return: 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
