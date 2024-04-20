#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n) of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
