#include <stdio.h>

/**
*	Description: main - print number combo
*	with spaces and comma
*	Return: 0 on success
*/

int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e = 1 && e < i)
			{
				putchar(e);
				putchar(i);

				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
