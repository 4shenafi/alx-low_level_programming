#include "main.h"
#include <stdio.h>
/**
  * print_array - prints element of array
  * @a: passed array
  * @n: passed number of element
  * Return: nothing
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

