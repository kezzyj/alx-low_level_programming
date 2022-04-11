#include <stdio.h>

/**
*	Description: main - to print lower case then alph case,
*	Return: 0 if success
*/

int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
