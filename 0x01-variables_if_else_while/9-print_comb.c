#include <stdio.h>

/**
*	Description: main - prints single numbers
*	with space and coma,
*	Return: 0 on success
*/

int main(void)
{
	int i;

	for (i = 58; i >= 48; i--)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
