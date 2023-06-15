#include "lists.h"


/**
 * print_dlistint - outputs all the elements of a dlistint_t list
 * @h: initial node of the linked list
 * Return: num of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
