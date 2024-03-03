#include "main.h"
/**
  * print_most_numbers - prints most number
  * Return: doesn't return anything
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
