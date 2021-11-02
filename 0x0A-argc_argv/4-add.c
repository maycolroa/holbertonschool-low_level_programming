#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, oper;
oper = 0;
i = 1;
if (argc < 1)
return (0);
while (i < argc)
;
{
	if (!atoi(argv[i]))
	{
	printf("%s\n", "Error");
	return (1);
	}
oper += atoi(argv[i]);
i++;
	}
	printf("%d\n", oper);

	return (0);
}
