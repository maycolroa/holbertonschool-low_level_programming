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
	int i = 0;
	int j = 0;
	int oper = 1;


	if  (b == NULL)
	{
		return (0);

	}

	while (b[j] != '\0')
	{

		j++;
	}


	for (j -= 1; j >= 0; j--)
	{
		if  (b[j] != '1' && b[j] != '0')
		{
			return (0);

		}

		i = i + ((b[j] - '0') * oper);
		oper = oper * 2;
	}
	return (i);
}
