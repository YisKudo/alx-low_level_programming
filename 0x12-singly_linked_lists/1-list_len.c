#include "lists.h"

/**
 * list_len - length of the list
 *
 * @h: input list
 *
 * Return: len of list
 */

size_t list_len(const list_t *h)
{
	int count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
