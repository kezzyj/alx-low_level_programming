#inlcude "main.h"

/**
 * print_binary- to print binary number
 * @n: variable holding any decimal number
 * Return: return the binary converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
