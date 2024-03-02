#include <stdio.h>

/**
  * main - prints Fibonacci sequence
  * Return: always return 0
  */
int main(void)
{
	int n;
	int k;
	int i = 1;
	int j = 2;

	printf("%d, %d, ", i, j);
	for (k = 2; k < 50; k++)
	{
		n = i + j;
		printf("%d", n);
		if (k < 50)
			printf(", ");
		i = j;
		j = n;
	}
	printf("\n");
	return 0;
}

