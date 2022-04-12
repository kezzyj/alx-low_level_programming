#include <stdio.h>
#include "main.h"

/**
*	Description: main - prints _putchar
*	Return: 0 on sucess
*/

int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
