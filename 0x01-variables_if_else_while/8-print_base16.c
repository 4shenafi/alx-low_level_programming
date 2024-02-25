#include <stdio.h>

/**
 * main - main function prints all the numbers of base 16 in lowercase.
 * Return: always return 0.
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar(n);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
