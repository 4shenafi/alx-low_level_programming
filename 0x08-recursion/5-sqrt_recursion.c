#include "main.h"
/**
  * _sqrt_recursion - returns recursion
  * sqrt_helper -helps to find squared number
  * @n: passed parameter
  * @guess: passed parameter
  * Return: returns
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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
