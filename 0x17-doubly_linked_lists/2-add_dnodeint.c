#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to store in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return NULL;

	newnode->n = n;
	newnode->prev = NULL;

	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	else
	{
		newnode->next = NULL;
	}

	*head = newnode;

	return newnode;
}
