#include "main.h"

/**
 * get_bit - funtion to print the bit required
 * @n: variable holding the number
 * @index: index required
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;



	for (i = 0; i < index; i++)

		n >>= 1;

	if (i > ((sizeof(unsigned long int) * 8) - 1))

		return (-1);

	return (n & 1);

}
