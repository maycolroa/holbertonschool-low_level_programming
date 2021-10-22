#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square
 * @n: char 1
 *
 *
 *Return: -1.
 */
int _sqrt_recursion(int n)
{
float square_root(int, float);
if (n == 0 || n == 1)
{
return (n);
}
return (square_root(n, 2));
}
/**
 *  square_root -  returns the natural square
 * @n: char 1
 * @i: count 1
* Return: -1 if n does not have a natural square root,
*/

float square_root(int n, float i)
{
if ((i * i) > n)
{
return (-1);
}
if (n / i != i)
{
return (square_root(n, i + 1));
}
else
{
return (i);
}
}
