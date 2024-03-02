#include <stdio.h>

/**
  * main - prints Fibonacci sequence
  * Return: always return 0
  */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int n;

	printf("%lu, %lu, ", i, j);

	for (int k = 3; k <= 50; k++)
	{
		n = i + j;
		printf("%lu", n);
		if (k < 50)
			printf(", ");
		i = j;
		j = n;
	}
	printf("\n");
	return (0);
}


