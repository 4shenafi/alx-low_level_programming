#include "main.h"
/**
  * print_alphabet_x10 - main function prints lower case alphabet 10 times
  *
  * Return: always return 0
  */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

