#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at a specific index
 * in a dlistint_t linked list.
 * @head: Pointer to the current node of the list
 * @index: Position of the node to delete
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode = NULL;

	if (!head || !*head)
		return (-1);

	currentNode = *head;
	if (index == 0)
		*head = currentNode->next;

	while (index > 0)
	{
		currentNode = currentNode->next;
		index--;
		if (!currentNode)
			return (-1);
	}

	if (currentNode->prev)
		currentNode->prev->next = currentNode->next;
	else if (currentNode->next)
		currentNode->next->prev = NULL;

	if (currentNode->next)
		currentNode->next->prev = currentNode->prev;
	else if (currentNode->prev)
		currentNode->prev->next = NULL;

	free(currentNode);

	return (1);
}
