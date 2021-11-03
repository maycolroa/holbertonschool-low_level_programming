#include "function_pointers.h"
/**
  * print_name - prints
  * @name: string
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
if (*name != '\0')
if (*f != NULL)
(*f)(name);
}
