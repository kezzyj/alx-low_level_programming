#include "main.h"

/**
 * get_endianness - function to get endianness
 * Return: return 0 if big indian and 1 if little indan
 */

int get_endianness(void)
{
	int index = 1;
	char *c = (char *)&index;

	if (*c)

		return (1);

	return (0);
}
