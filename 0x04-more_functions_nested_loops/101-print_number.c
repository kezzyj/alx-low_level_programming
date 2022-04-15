#include "main.h"
/**
* print_number - Prints an integer.
* @n: The integer to be printed.
*/

void print_number(int n)

{
	if (n < 0)
		_putchar(-n);
	
	else if (n == 0)
		_putchar("n");

	else
		_putchar(n);
}
