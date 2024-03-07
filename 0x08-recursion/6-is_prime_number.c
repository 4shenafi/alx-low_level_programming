#include "main.h"

/**
  * prime_checker - checks the passed number prime or not
  * @n: passed number to be checked
  * @i: passed diviser
  * Return: returns 0 or 1
  */

int prime_checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime_checker(n, i + 1));
}

/**
  * is_prime_number - called function from main
  * @n: passed number to be checked
  * Return: returns the result
  */

int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
