#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: integers to print
 *
 * Description: This function prints integers separated by a given string.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list lists;

	if (separator == NULL)
	{
		return;
	}

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lists, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lists);
}
