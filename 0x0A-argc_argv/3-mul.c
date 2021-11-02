#include "main.h"
/**
 * main - Write a program that multiplies two numbers.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 1.
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
	}

	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j;

		printf("%d\n", k);
	}

	return (0);
}
