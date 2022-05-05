#include "main.h"
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated 
 */

char *str_concat(char *s1, char *s2)
{
	char m;

	m = strcat(s1, s2);
	return (m);
}
