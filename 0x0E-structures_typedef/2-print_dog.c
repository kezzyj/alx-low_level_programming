#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("nil");

		printf("%s\n", (*d).name);

		if ((*d).age == NULL) 
			printf("nil"); 

		printf("%f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("nil");

		printf("%s\n", (*d).owner);
	}
}


