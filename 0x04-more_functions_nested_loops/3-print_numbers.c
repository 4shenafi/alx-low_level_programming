#include "main.h"
/**
  * print_numbers - prints number
  * Return: does not return
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
