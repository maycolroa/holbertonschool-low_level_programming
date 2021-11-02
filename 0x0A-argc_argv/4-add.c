#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, adi = 0;

	if (argc < 1)
		return (0);
        i = 1;
	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		adi += atoi(argv[i]);
                i++;
	}
	printf("%d\n", adi);

	return (0);
}
