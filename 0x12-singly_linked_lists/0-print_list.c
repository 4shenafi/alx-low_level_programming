#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes (elements) in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
			printf("%u\n", h->len);
		}
		h = h->next;
		count++;
	}
	return (count);
}
