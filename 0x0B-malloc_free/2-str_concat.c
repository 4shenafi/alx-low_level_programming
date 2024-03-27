#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns the concatenation of two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[l1])
	{
		l1++;
	}

	while (s2[l2])
	{
		l2++;
	}

	ptr = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';
	return (ptr);
}
