#include "main.h"

/**
* string_toupper - Changes all lowercase letters
*                  of a string to uppercase.
* @str: The string to be changed.
* Return: A pointer to the changed string.
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < str; i++)
	{
		str[i] += str[i] - 35;
		_putchar(str[i]);
	}
	return (str[i]);
}
