#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - is a function prints n to 98
  * @n: passed parameter to be initial number
  */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);

	}
	printf("\n");
}
