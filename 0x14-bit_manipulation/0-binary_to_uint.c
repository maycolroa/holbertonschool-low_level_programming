#include "main.h"

/**
 * binary_to_uint - function that converts a binary number.
 *@b: char
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int j = 1;
	int oper = 0;

	if (b == NULL)
		return (0);

while (b[oper] != '\0')
{
oper++;
}
for (oper -= 1; oper >= 0; oper--)
	{
		if (b[oper] != '0' && b[oper] != '1')
			return (0);
		i += (b[oper] - '0') * j;
		j *= 2;
	}

	return (i);
}
