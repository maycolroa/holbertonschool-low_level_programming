#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: pointer 1
  * @size: array
  * @cmp: pointer 2
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || !(array) || !(cmp))
return (-1);
for (i = -1; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
