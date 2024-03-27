#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array to create
 * @c: character to initialize the array with
 * Return: pointer to the allocated array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *)malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (position = 0; position < size; position++)
	{
		buffer[position] = c;
	}
	return (buffer);
}
