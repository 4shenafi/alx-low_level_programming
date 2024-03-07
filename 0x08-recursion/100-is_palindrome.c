#include "main.h"
#include <string.h>

/**
  * palindrome_checker - checks if the passed string is a palindrome
  * @s: pointer to the string
  * @l: length of the string
  * @j: index for the middle element
  * @i: index for traversing the string
  * Return: 1 if palindrome, 0 otherwise
  */
int palindrome_checker(char *s, int l, int j, int i)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[l - 1 - i])
	{
		return (0);
	}
	return (palindrome_checker(s, l, j, i + 1));
}

/**
  * is_palindrome - checks if the passed string is a palindrome
  * @s: pointer to the string
  * Return: 1 if palindrome, 0 otherwise
  */

int is_palindrome(char *s)
{
	int l = strlen(s);
	int j;

	if (l % 2 == 0)
	{
		j = l / 2;
	}
	else
	{
		j = (l + 1) / 2;
	}
	return (palindrome_checker(s, l, j, 0));
}
