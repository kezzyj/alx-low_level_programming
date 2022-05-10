#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(sizeof(unsigned int) * b);

	if (mem != NULL)
		return (mem);

	exit(98);
}
