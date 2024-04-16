#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: strings to print
 *
 * Description: This function prints strings separated by a given string.
 *              If a string is NULL, it prints "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nail)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
