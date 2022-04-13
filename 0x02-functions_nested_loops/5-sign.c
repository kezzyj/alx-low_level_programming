#include "main.h"

/**
*	print_sign:prints number sign
*	@n: variable to check
*	Return: 1 on success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(1);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return(0);
	}
	else
	{
		_putchar(n < 0);
		return (-1);
	}
}
