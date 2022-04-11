#include <stdio.h>

/**
*	Description: main - prints all alphabets in lowercase,
*	Return: 0 on successful
*/

int main(void)
{
	char lowerAlphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowerAlphabets[i]);
	}

	putchar('\n');
	return (0);
}
