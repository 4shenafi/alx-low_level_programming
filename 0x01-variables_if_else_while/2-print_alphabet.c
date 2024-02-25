#include <stdio.h>
/**
  * main - main function prints a-z using putchar function
  * Return: always return 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
