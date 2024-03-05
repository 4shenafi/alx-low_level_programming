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
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
