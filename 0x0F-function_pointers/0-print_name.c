#include "function_pointers.h"
/**
  * print_name - prints a name
  * @name: string
  * @f: function pointer
  * Return: 0
  */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
if (f != NULL)
if (*name != '\0')
(*f)(name);
}

