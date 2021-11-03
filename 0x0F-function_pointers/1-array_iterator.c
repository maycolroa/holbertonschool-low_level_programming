#include "function_pointers.h"
/**
  * array_iterator - function given as a parameter on each element
  * @array: array 1
  * @size: array 2
  * @action: pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (action != NULL && array != NULL)
{
while (++i< size)
action(array[i]);
}
}
