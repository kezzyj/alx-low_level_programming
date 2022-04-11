#include <stdio.h>

/**
*	Description: main - prints single numbers
*	with space and coma,
*	Return: 0 on success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
