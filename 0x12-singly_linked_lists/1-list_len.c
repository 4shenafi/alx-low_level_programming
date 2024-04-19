#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the length of structure
 * @h: passed nodes
 *
 * Return: return no counted
 *
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
