#include <stdio.h>

/**
*
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

	printf("Size of a char: \n"sizeof(c));
	printf("Size of a int: \n"sizeof(i));
 	printf("Size of a long int: \n"sizeof(l));
       	printf("Size of a long long int: \n"sizeof(ll));
	printf("Size of a float: \n"sizeof(f));
	return (0);
}
