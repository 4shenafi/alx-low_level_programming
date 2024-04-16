#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Custom printf function for various data types
 * @format: A format string indicating the data types to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list lists;

	va_start(lists, format);
	while (format && format[i])
	{
		char c;
		int integer;
		float f;
		char *s;

		switch (format[i])
		{
			case 'c':
				c = va_arg(lists, int);
				printf("%c", c);
				break;
			case 'i':
				integer = va_arg(lists, int);
				printf("%d", integer);
				break;
			case 'f':
				f = va_arg(lists, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(lists, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(lists);
	printf("\n");
}
