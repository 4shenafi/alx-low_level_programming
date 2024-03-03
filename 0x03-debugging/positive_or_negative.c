#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
  * main - main function generates random number
  * Return: always return 0
  */
int postitive_or_negative()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive.\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
