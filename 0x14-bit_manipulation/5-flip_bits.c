#include "main.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: int 1
  * @m: int 2
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j;

	j = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			j++;
	return (j);
}
