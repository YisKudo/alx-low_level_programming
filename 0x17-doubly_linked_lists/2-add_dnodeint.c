#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a dlistint_t list
 * @head: pointer to the current node of the linked list
 * @n: value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
