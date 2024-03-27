#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string and return a pointer to the new copy.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 *         was available.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr)
}

