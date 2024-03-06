#include "main.h"
/**
  * sqrt_helper - Helper function for calculating the square root recursively
  * @n: The number whose square root is to be calculated
  * @guess: Current guess for the square root
  * Return: The square root of n
  */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, ++guess));
	}
}

/**
  * _sqrt_recursion - Calculates the square root of a non-negative integer
  * @n: The number whose square root is to be calculated
  * Return: The square root of n, or -1 if n is negative
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
