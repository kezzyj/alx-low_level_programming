#include <stdlib.h>
#include <time.h>

/**
*	Description: main - this prints positive and negative integers,
*	Return: 0 if successful
*/

int main(void)

{
	int n;


	 srand(time(0));
	 n = rand() - RANDMAX / 2;

	 if(n > 0)
	 {
		 printf(n, "%d is positive\n");
	 }

	 else if(n == 0)
	 {
		 printf("%d is zero\n");
	 }

	 else
	 {
		 printf("%d is negative\n");
	 }
	 return (0);
}
