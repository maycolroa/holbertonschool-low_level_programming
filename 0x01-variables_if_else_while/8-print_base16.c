#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 *Return: 0
 */
int main(void)
{
char i;
int j;

for (j = 0; j < 10; j++)
putchar(j + '0');
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
