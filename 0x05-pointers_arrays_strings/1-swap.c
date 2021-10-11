#include "main.h"
#include <stdio.h>
/**
 *swap_int - print a b i
 *@a: array 1
 *@b: array 2
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
