#include "main.h"

/**
* puts2 - Prints one char out of two of a string.
* @str: The string containing characters.
*/

void puts2(char *str)
{
	int index;

	for (index = 0; index < strlen(str); index += 2)

		_putchar(str[index]);



	_putchar('\n');

}
