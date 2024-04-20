#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the length of structure
 * @h: passed nodes
 *
 * Return: return no counted
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
