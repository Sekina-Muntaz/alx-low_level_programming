#include "main.h"
/**
 * get_bit - unction that returns the value of a bit at a given index.
 * @n: parameter to check
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 63)
		return (-1);

	value = 1 << index;
	return ((n & value) > 0);
}
