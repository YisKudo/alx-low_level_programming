#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the current node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head)
		node = node->next, free(head), head = node;
}
