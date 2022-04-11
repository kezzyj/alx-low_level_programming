#include <stdio.h>

/**
*	Description: main -  prints hexa decimal,
*	Return: 0 on success
*/

int main(void)
{
	char hexa[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}
