#include "main.h"
/**
 * _memset - filling function
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: returns pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
