#include "main.h"
/**
 * flip_bits - Calculates the number of bits needed to flip
 *              to transform one number into another.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
	}

	return (n_bits);
}
