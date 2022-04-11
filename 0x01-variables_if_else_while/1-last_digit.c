#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*	Description: main - prints last number and strings,
*	Return: 0 on success
*/

int main(void)
{
	int n, lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero", n, lastDigit);
	}
	
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	return(0);
}	
