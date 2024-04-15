#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which cmp function does not return 0,
 * otherwise -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
