#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * puts2 - prints one of two in string
  * @str: passed parameter
  * Return: nothing
  */
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	printf("\n");
}
