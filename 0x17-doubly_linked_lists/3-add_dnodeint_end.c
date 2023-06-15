#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node
 * at the end of a dlistint_t list
 * @head: Pointer to the current node of the linked list
 * @n: Value of the node to add
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head)
	{
		while (current->next)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	else
		*head = newNode;

	return (newNode);
}
