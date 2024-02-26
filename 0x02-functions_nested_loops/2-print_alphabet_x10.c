#include <stdio.h>
/**
  * main - main function prints lower case alphabet 10 times
  *
  * Return: always return 0
  */
int main(void)
{
	char ch;
	int i;
	i=0;

	while(i < 10)
	{
		ch = 'a';
		while(ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}

