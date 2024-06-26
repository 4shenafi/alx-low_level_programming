#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees all the nodes of a dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
