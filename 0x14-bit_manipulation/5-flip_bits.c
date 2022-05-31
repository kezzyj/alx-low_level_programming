#include "main.h"

/**
 * flip_bits - function to print flipped bit
 * @n: number to get the flipped bit from
 * @m the flipped bit 
 * Return: return flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret, i;

	for (i = 0, ret = 0; i < (sizeof(unsigned long int) * 8); i++)
	{

		if ((n & 1) != (m & 1))

			ret++;

		n >>= 1, m >>= 1;

	}

	return (ret);
}
