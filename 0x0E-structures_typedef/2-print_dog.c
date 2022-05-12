#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)                                            
{                       
	char *empty = "nil";
	if (d != NULL)                                                  
	{                                               
		if ((*d).name == NULL)  
			printf("Name: %s\n", empty); 
		printf("Name: %s\n", (*d).name);

		if ((*d).age < 0 )  
			printf("Age: %s\n", empty); 
		printf("Age: %f\n", (*d).age);  

		if ((*d).owner == NULL)    
			printf("Owner: %s\n", empty); 
		printf("Owner: %s\n", (*d).owner);     
	}                                                            
}  
