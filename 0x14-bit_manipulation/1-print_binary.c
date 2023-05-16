#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - function to print an unsigned int in binary
 *
 * @n:parameter to be checked
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1ul << 63;
	char c = '0';

	while (!(num & n) && num != 0)
		num = num >> 1;

	if (num == 0)
		write(1, &c, 1);

	while (num)
	{
		if (num & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		num = num >> 1;
	}
}
