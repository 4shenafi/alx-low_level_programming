#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at the given index of a
 *                         dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the given index, or NULL if the node
 *         does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
