 #include "main.h"

/**
* _strncpy - Copies at most an inputted number
* @dest: The buffer storing the string copy.
* @src: The source string.
* @n: The maximum number of bytes to copied from src.
* Return: A pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
