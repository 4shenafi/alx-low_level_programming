#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Computes the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list nums;

	if (n == 0)
	{
		return (0);
	}


	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}

