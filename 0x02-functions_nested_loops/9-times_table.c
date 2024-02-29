#include "main.h"
/**
  * times_table - a function prints time table
  * 
  */
void times_table(void)
{
	int n = 0;
	int j;
	int i;
	while (n < 10)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
	
	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('i');
		_putchar(',');
		_putchar(' ');
		j = i;
		while (j < 10)
		{
			j = j + i;
			_putchar('j');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
