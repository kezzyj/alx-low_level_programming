#include <stdio.h>

/**
* 	Description: main print all size of types
* 	Return: return 0 on success
*/

int main(void)

{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(i));
 	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(l));
       	printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
