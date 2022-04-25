#include "main.h"

/**
* _strncat - Concatenates two strings using at most
* @dest: The string to be appended upon.
* @src: The string to be appended to dest.
* @n: The number of bytes from src to be appended to dest.
* Return: A pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
