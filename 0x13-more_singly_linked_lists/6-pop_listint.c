#include "lists.h"

/**
 * pop_listint - pops head node
 * @head: node to be popped
 * Return: data of node
 */

int pop_listint(listint_t **head)
{
	listint_t temp;
	int n;

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
