#include "main.h"

/**
*	Description: int _isalpha - function to check if
*	letter is alpha
*	@c:Variable to check
*	Return: 1 on success
*/

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
