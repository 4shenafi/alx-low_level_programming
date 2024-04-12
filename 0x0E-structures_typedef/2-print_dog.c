#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints initialized value of a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the initialized values
 *              of a dog structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
