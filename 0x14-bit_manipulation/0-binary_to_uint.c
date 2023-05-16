#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if bis null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int mul = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		num += ((b[i] - '0') * mul);
		mul *= 2;
		i--;
	}


	return (num);

}
