#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: the list
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
