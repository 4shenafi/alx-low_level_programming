#include "main.h"
/**
  * main - prints lower case alphabet
  * Return: always return 0
  */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
