#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocated and returns array two dimentional
 * @width: passed collumn of array
 * @height: passed length of array
 * Return: returns
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
