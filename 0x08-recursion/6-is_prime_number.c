#include "main.h"
/**
 * prime_number -  print prime number
 * @n: char 1
 * @i: int.
 *
 *Return: -1 0.
 */

int prime_number(int i, int n)
{
if (n % i == 0)
{
if (i == n)
{
return (1);
}
else
{
return (0);
}
}
return (prime_number(i + 1, n));
}
/**
 * is_prime_number - Checks
 * @n: number.
 *
 * Return: 1, 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (n > 2 ? prime_number(2, n) : 1);
}
