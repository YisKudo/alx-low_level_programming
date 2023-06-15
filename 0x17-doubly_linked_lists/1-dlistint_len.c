#include "lists.h"

/**
 * dlistint_len - returns the number of
 * elements in a linked dlistint_t list.
 * @h: first node 
 * Return: number of nodes 
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
		h = h->next
		count++;

	return (count);
}
