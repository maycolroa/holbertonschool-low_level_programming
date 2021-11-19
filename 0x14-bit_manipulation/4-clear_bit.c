#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0
  * @n: int
  * @index: index int
  * Return: 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
