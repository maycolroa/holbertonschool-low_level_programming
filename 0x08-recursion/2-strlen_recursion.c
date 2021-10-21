#include "main.h"
/**
 *_print_rev_recursion - the length of a string.
 * @s: string 1
 *
 *
 *Return: 0.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i = _strlen_recursion(s + 1);
i++;
}
return (i);
}
