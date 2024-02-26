#include <stdio.h>
/**
  * print_alphabet_x10 - main function prints lower case alphabet 10 times
  *
  * Return: always return 0
  */
void print_alphabet_x10(void)
{
	char ch;

	for (int i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}

