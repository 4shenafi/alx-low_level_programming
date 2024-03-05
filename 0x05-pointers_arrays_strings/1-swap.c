#include "main.h"
/**
  * swap_int - a function swaps value accepted
  * @a: first passed parameter
  * @b: second passed parameter
  * Return: noting
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
