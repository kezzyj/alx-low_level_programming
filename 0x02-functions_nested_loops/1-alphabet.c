#include <stdio.h>
#include "main.h"

/**
*	Description: print_alphabet - prints alphabets in lowercase
*	Return: 0 on success
*/

	void print_alphabet(void)
	{
		char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
	}
