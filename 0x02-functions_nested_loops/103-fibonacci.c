#include <stdio.h>

/**
  * main - prints Fibonacci sequence
  * Return: always return 0
  */
int main(void)
{
	long int i;
	long int a = 1;
	long int b = 2;
	long int s = 0;
	long int t = 0;

	for (i = 0; i < 49; i++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			t = t + b;
		}
		s = a + b;
		a = b;
		b = s;

	}
	printf("%ld\n", t);
	return (0);
	}
