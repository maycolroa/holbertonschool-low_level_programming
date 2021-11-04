#include "function_pointers.h"
/**
  * int_index - function that searches for an integer.
  * @array: pointer 1
  * @size: array
  * @cmp: pointer 2
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = -1;
if (size <= 0)
if (array != NULL)
if (cmp != NULL)
return (-1);
while (++i < size)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
