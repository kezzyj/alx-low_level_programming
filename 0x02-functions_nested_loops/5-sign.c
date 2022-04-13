#include "main.h"

/**
*	Description: - print_sign:prints number sign
*	@n: variable to check
*	Return: 1 on success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
