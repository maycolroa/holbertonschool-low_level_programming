#include "main.h"
/**
 *reverse_array - print reverses
 * @a: Array 1
 * @n: array 2
 *Return: 0.
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int k;
for (i = 0, j = n - 1; i < n / 2; j--, i++)
{
k = a[i];
a[i] = a[j];
a[j] = k;
}
}
