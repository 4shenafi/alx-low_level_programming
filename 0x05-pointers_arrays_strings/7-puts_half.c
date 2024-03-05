#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * puts_half - print half of a string
  * @str: passed parameter
  * Return: nothing
  */
void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	for (i = l / 2; i < l; i++)
	{
		putchar(str[i]);
	}
	printf("\n");
}
