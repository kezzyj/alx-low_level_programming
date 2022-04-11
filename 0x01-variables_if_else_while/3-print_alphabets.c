#include <stdio.h>

/**
*	Description: main - to print lower case then alph case,
*	Return: 0 if success
*/

int main(void)
{
	char alphabets = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

	for (alphabets = 0; alphabets < 52; alphabets++)
	{
		puchar(alphabets);
	}
	putchar('\n');
	return (0);
}
