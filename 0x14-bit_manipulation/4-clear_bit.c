#include "main.h"

/**
 * clear_bit - function to help clear bits
 * @index: variable holding the index to be set to 0
 * @n: the number to be entered
 * Return: return 1 on successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))

		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask);

	return (1);

}
