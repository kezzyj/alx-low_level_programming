#include <stdio.h>

/**
*	Description: main - print to the standard error
*	Return: 1 if successful
*/

int main(void)

{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, var, 59);
	return (1);
}
