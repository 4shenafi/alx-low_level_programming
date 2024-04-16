#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Custom printf function for various data types
 * @format: A format string indicating the data types to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
