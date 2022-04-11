#include <stdio.h>

/**
*	Description: main -  prints letters in reverse order,
*	Return: 0 if succeed
*/

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz"
	int i;

	for (i = 26; i >= 0; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
