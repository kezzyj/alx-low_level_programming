#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem = malloc(sizeof(char) * s1);
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	mem = strncat(s1, s2, n);
	if (mem == NULL)
	{
		return (NULL);
	}
	else (n >= strlen(s2))
	{
		mem = strcat(s1, s2);
		return (mem)
	}
}
