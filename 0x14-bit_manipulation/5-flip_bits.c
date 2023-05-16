#include "main.h"
/**
 * flip_bits - function that returns the number of bits to flip to get from one number to another
 * @n: parameter to check
 * @: bits
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			counter++;
		m = m >> 1;
		n = n >> 1;
	}

	return (counter);

}
