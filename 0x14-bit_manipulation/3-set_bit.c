#include "main.h"

/**
 * set_bit - function to set bit
 * @n: variable holding number to set bit in
 * @index: index of the number to set
 * Return: return 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))

		return (-1);

	*n = (*n | (1 << index));

	return (1);

}
