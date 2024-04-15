#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to the name string
 * @f: Pointer to the function used to print the name
 *
 * Description: This function takes a pointer to a name string and a pointer
 * to a function that prints a string. If the name and function pointers are
 * not NULL, it calls the provided function pointer with the name string as
 * an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

