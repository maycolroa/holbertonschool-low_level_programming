#include "main.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, j;
i = j = 0;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
return (0);
}
else
printf("Error\n");
return (1);
}
