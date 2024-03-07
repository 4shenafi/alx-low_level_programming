#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings with wildcards
 * @s1: first string
 * @s2: second string with wildcards
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 || *s2 == '*')
		return wildcmp(s1 + 1, s2 + 1) ||
			wildcmp(s1, s2 + 1) ||
			wildcmp(s1 + 1, s2);
	return (0);
}
