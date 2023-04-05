#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: list
 * @n: input int
 * Return: address of new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *) malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
