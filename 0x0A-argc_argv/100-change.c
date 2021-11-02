#include "main.h"
/**
 * main - program that prints the minimum number of coins
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int exchange;
	int currency;

	currency = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	exchange = atoi(argv[1]);
	for (exchange = atoi(argv[1]); exchange > 0; currency++)
	{
		if (exchange >= 25)
			exchange = exchange - 25;
		else if (exchange >= 10)
			exchange = exchange - 10;
		else if (exchange >= 5)
			exchange = exchange - 5;
		else if (exchange >= 2)
			exchange = exchange - 2;
		else
			exchange = exchange - 1;
	}
	printf("%i\n", currency);
	return (0);
}
