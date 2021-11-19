#include "main.h"

/**
  * get_bit - function that returns the value of a bit
  * @n: int
  * @index: index int
  * Return: -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
