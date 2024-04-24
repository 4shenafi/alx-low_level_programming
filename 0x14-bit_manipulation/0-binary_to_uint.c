#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The converted unsigned integer, or 0 if @b contains characters
 *         other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int n = strlen(b);
	unsigned int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (b[i] == '0')
		{
		}
		else if (b[i] == '1')
		{
			sum += (unsigned int)pow(2, n - i - 1);
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
