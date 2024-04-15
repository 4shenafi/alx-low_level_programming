#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Iterates over an array and applies a given action
 * to each element
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to apply to each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
