#include <stdio.h>
#include "main.h"

/**
*	Description: main - prints alphabets in lowercase
*	Return: 0 on success
*/

int main(void)
{
	void print_alphabet(void)
	{
		char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
		return (0);
	}
}
