#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * print_rev - prints reverse string
  * @s: passed parameter
  * Return: nothing
  */
void print_rev(char *s)
{
	int l = strlen(s);
	int i;

	for (i = l - 1; i >= 0; --i)
	{
		putchar(s[i]);
	}
	printf("\n");
}
