#include "lists.h"

/**
 * sum_dlistint - Function that calculates the sum of all the data
 * (n) in a dlistint_t linked list.
 * @head: Pointer to the current node of the linked list
 * Return: Sum of the data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	
	return (total);
}
