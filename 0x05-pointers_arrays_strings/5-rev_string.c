#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * rev_string - prints reverse string
  * @s: passed parameter
  * Return: nothing
  */
void rev_string(char *s)
{
	int l = strlen(s);
	int i;

	for (i = l - 1; i >= 0; --i)
	{
		putchar(s[i]);
	}
	printf("\n");
}
