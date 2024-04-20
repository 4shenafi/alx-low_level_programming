#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                             in a dlistint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = temp;
		if (temp != NULL)
			temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->prev = temp;
	newnode->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = newnode;

	temp->next = newnode;

	return (newnode);
}
