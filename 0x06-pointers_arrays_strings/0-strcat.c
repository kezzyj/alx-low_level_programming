#include "main.h"

/**
* strcat - Concatenates the string pointed to by @src, including the terminating
* @dest: A pointer to the string to be concatenated upon
* @src: The source string to be appended to @dest.
* Return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
