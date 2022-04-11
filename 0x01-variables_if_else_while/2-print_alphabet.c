#include <stdio.h>

/**
*	Description: main - prints all alphabets in lowercase,
*	Return: 0 on successful
*/

int main(void)
{
	char lowerAlphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	while (lowerAlphabets < 26)
	{
		putchar(lowerAlphabets);
	}

	putchar("\n");
	return (0);
}
