#include "main.h"
/**
 *_puts_recursion - prints a string
 * @s: string 1
 *
 *
 *Return: 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
