#include "main.h"

/**
  * print_number - a function prints an integer.
  * @n: passed parameter
  */

void print_number(int n)
{
	unsigned int a = 0;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
	{
		a = n;
	}

	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
